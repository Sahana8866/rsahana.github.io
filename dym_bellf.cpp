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
        return {};
    return dist;

}

void paths(int vertex,vector<int>&parent)
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
        {
            cout << " -> ";
        }
    }
}

void bellmanford_4()
{
    vector<vector<int>> edges = {{0,1,5},{1,2,1},{1,3,2},{2,4,1},{4,3,-1}};
    int V = 5, source = 0, i = 0, s = 0;
    vector<int>parent(V,-1);
    vector<int>dist = bellf(V,edges,source,parent);

    if(dist.empty())
        cout << "Routes lead to a negative weighted cycle!\n";

    else
    {
        cout << "Shortest Path from source 0 : \n";
        for(int i=0; i<V; i++)
        {
            cout << "Location " << i << " : " << dist[i] << endl;
            s+=dist[i];
        }
        cout << "\n\nOptimized paths : \n" << endl;

        for(int i=0; i<V; i++)
        {
            cout << "Location " << i << " : ";
            paths(i,parent);
            cout << endl;
        }
        cout << "\nTotal distance travelled = " << s << endl;
    }
}

