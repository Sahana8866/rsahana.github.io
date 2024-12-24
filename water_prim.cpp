#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
#define V 5

using namespace std;

void printmst(vector<int>&parent,vector<vector<int>>&graph)
{
     cout << "Edge \tWeight\n";
     int s=0;
    for (int i = 1; i < V; i++)
        {
            cout << parent[i] << " - " << i << " \t"
             << graph[parent[i]][i] << " \n";
             s+=graph[parent[i]][i];
        }
    cout << "MST cost = " << s << endl;
}

int minkey(vector<int>&key,vector<bool>&mstset)
{
    int mi=INT_MAX,minindex;
    for(int v=0; v<V; v++)
    {
        if(mstset[v]==false && key[v]<mi)
        {
            mi=key[v];
            minindex = v;
        }
    }
    return minindex;
}

void prim(vector<vector<int>> &graph)
{
    vector<int>key(V,INT_MAX);
    vector<int>parent(V,-1);
    vector<bool>mstset(V,false);

    key[0]=0;
    parent[0]=-1;

    for(int c=0; c<V-1; c++)
    {
        int u=minkey(key,mstset);
        mstset[u]=true;

        for(int v=0; v<V; v++)
        {
            if(graph[u][v]<key[v] && mstset[v]==false && graph[u][v])
            {
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    printmst(parent,graph);
}

int main()
{
    vector<vector<int>>graph = { { 0, 2, 0, 6, 0 },
                                { 2, 0, 3, 8, 5 },
                                { 0, 3, 0, 0, 7 },
                                { 6, 8, 0, 0, 9 },
                                { 0, 5, 7, 9, 0 } };

    prim(graph);
    return 0;
}

