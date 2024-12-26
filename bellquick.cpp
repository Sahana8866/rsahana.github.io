#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> bellf(int V, vector<vector<int>> &edges, int source, vector<int>& parent) {
    vector<int> dist(V, 1e8);
    int u, v, wt;
    dist[source] = 0;

    for (int i = 1; i < V; i++) {
        for (vector<int> e : edges) {
            u = e[0];
            v = e[1];
            wt = e[2];
            if (dist[u] != 1e8 && dist[v] > (dist[u] + wt)) {
                dist[v] = dist[u] + wt;
                parent[v] = u;
            }
        }
    }

    if (dist[u] != 1e8 && dist[v] > (dist[u] + wt)) {
        return {};
    }
    else {
        return dist;
    }
}

void path(int vertex, vector<int>& parent) {
    stack<int> p;
    while (vertex != -1) {
        p.push(vertex);
        vertex = parent[vertex];
    }
    while (!p.empty()) {
        cout << p.top();
        p.pop();
        if (!p.empty()) cout << " -> ";
    }
}

int partition(vector<pair<int, int>>& distWithIndex, int low, int high) {
    int pivot = distWithIndex[high].second;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (distWithIndex[j].second <= pivot) {
            i++;
            swap(distWithIndex[i], distWithIndex[j]);
        }
    }
    swap(distWithIndex[i + 1], distWithIndex[high]);
    return i + 1;
}

void quickSort(vector<pair<int, int>>& distWithIndex, int low, int high) {
    if (low < high) {
        int pi = partition(distWithIndex, low, high);
        quickSort(distWithIndex, low, pi - 1);
        quickSort(distWithIndex, pi + 1, high);
    }
}

int main() {
    vector<vector<int>> edges = {{0, 1, 6}, {1, 2, 2}, {1, 3, 5}, {2, 4, 2}, {3, 4, 1}, {0, 4, 10}};
    int V = 5, source = 0, i = 0, s = 0;
    vector<int> parent(V, -1);
    vector<int> dist = bellf(V, edges, source, parent);

    if (dist.empty()) {
        cout << "Routes lead to a negative weighted cycle!\n";
    } else {
        cout << "Locations and their distances from Source (Depot) before sorting:\n\n";
        for (i = 0; i < V; i++) {
            cout << "Location " << i << " : " << dist[i] << "\n";
        }

        vector<pair<int, int>> distWithIndex;
        for (i = 0; i < V; i++) {
            distWithIndex.push_back({i, dist[i]});
        }

        quickSort(distWithIndex, 0, distWithIndex.size() - 1);

        cout << "\nLocations and their distances from Source (Depot) after sorting:\n\n";
        for (auto& loc : distWithIndex) {
            cout << "Location " << loc.first << " : " << loc.second << "\n";
        }

        cout << "\nOptimized Paths:\n";
        for (auto& loc : distWithIndex) {
            cout << "Location " << loc.first << " : ";
            path(loc.first, parent);
            cout << "\n";
        }

        for (auto& loc : distWithIndex) {
            s += loc.second;
        }
        cout << "\nTotal Distance Travelled: " << s << endl;
    }
    return 0;
}

