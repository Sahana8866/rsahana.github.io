#include<iostream>
#define V 4
#include <bits/stdc++.h>
#define INF 99999
using namespace std;

void print(int dist[][V])
{
    for(int i=0; i<V; i++)
    {
        for(int j=0; j<V; j++)
        {
            if(dist[i][j]==INF)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";
        }
        cout << endl;
    }
}

void maxdist(int dist[][V])
{
    for(int i=0;i<V;i++)
    {
        int m = INT_MIN;
        for(int j=0;j<V;j++)
        {
            m = max(dist[i][j],m);
        }
        cout << "node " << i << " : " << m << endl;
    }
}

void floyd(int dist[][V])
{
    for(int k=0; k<V; k++)
    {
        for(int i=0; i<V; i++)
        {
            for(int j=0; j<V; j++)
            {
                if(dist[i][j]>dist[i][k]+dist[k][j] && dist[i][k]!=INF && dist[k][j]!=INF)
                    dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    cout << "Shortest Path Matrix\n";
    print(dist);

    cout << "Max distance from each node is : \n";
    maxdist(dist);
}

int main()
{
    int graph[V][V] = {{0,INF,3,INF},{2,0,INF,INF},{INF,7,0,1},{6,INF,INF,0}};
        floyd(graph);
        return 0;
    }

