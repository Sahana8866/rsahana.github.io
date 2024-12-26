#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> bellf(int V,vector<vector<int>> &edges,int source,vector<int>&parent)
{
    vector<int>dist(V,1e8);
    int u,v,wt;
    dist[source]=0;

    for(int i=1; i<V; i++)
    {
        for(vector<int> e:edges)
        {
            u=e[0];
            v=e[1];
            wt=e[2];
            if(dist[u]!=1e8 && dist[v]>(dist[u]+wt))
            {
                dist[v]=dist[u]+wt;
                parent[v]=u;
            }
        }
    }
    if(dist[u]!=1e8 && dist[v]>(dist[u]+wt))
    {
        return {};
    }
    else
        return dist;
}

int part(vector<pair<int,int>>&din,int l,int r)
{
    int p = din[l].second;
    int i=l,j=r+1;

    do
    {
        do
        {
            i++;

        }
        while(din[i].second<p);
        do
        {
            j--;

        }
        while(j>=0 && din[j].second > p);

        swap(din[i],din[j]);

    }
    while(i<j);

    swap(din[i],din[j]);
    swap(din[l],din[j]);
    return j;
}

void quicksort(vector<pair<int,int>>&din,int l,int r)
{
    if(l<r)
    {
        int s = part(din,l,r);
        quicksort(din,l,s-1);
        quicksort(din,s+1,r);
    }
}

void path(int vertex,vector<int>&parent)
{
    stack<int>p;
    while(vertex!=-1)
    {
        p.push(vertex);
        vertex = parent[vertex];
    }
    while(!p.empty())
    {
        cout << p.top();
        p.pop();
        if(!p.empty())
            cout << " -> ";
    }
}

int main()
{
    vector<vector<int>> edges = {{0, 1, 6}, {1, 2, 2}, {1, 3, 5}, {2, 4, 2}, {3, 4, 1}, {0, 4, 10}};
    int V = 5, source = 0, i = 0, s = 0;
    vector<int>parent(V,-1);
    vector<int>dist = bellf(V,edges,source,parent);

    if(dist.empty())
        cout << "Routes lead to a negative weighted cycle!\n";

    else
    {
        cout << "shortest distances (unsorted) from source 0 :\n\n";
        for(int i=0; i<V; i++)
        {
            cout << "Location " << i << " : " << dist[i] << endl;
            s+=dist[i];
        }

        vector<pair<int,int>>din;
        for(int i=0; i<V; i++)
        {
            din.push_back({i,dist[i]});
        }

        quicksort(din,0,din.size()-1);

        cout << "\nshortest distances (sorted) from source 0 :\n\n";
        for(auto&loc:din)
        {
            cout << "Location " << loc.first << " : " << loc.second << endl;
        }

        cout << "\nOptimized Paths :\n\n";
        for(auto&loc:din)
        {
            cout << "Location " << loc.first << " : ";
            path(loc.first,parent);
            cout << "\n";
        }

        cout << "\nTotal distance travelled : " << s << endl;

    }
    return 0;
}
