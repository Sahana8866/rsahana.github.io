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
