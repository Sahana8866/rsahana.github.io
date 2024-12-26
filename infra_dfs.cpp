#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int visited[10],v=8,m[10][10]= {{0,0,1,0,0,0,0,0},{0,0,1,1,0,0,0,0},{1,1,0,1,0,0,0,0},{0,1,1,0,1,1,0,0},{0,0,0,1,0,1,1,0},{0,0,0,1,1,0,1,0},{0,0,0,0,1,1,0,1},{0,0,0,0,0,0,1,0}};
int path[10],j=0;

void dfs(int m[10][10],int v,int source)
{
    visited[source]=1;
    for(int i=0; i<v; i++)
    {
        if(m[source][i]==1 && visited[i]==0)
        {
            cout << i << " ";
            for(int j=0; j<v; j++)
            {
                if(m[j][i]==1)
                    path[i]+=1;
            }
            dfs(m,v,i);
        }
    }
}
