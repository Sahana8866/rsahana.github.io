#include<iostream>
#include<stdlib.h>

using namespace std;

int visited[10],v=8,m[10][10]={{0,0,1,0,0,0,0,0},{0,0,1,1,0,0,0,0},{1,-1,0,1,0,0,0,0},{0,-1,1,0,1,-1,0,0},{0,0,0,1,0,-1,1,0},{0,0,0,1,1,0,1,0},{0,0,0,0,1,-1,0,1},{0,0,0,0,0,0,1,0}};
int path[10],j=0;

void dfs(int m[10][10],int v,int source)
{
    visited[source]=1;
    for(int i=0;i<v;i++)
    {
        if(m[source][i]==1 && visited[i]==0)
        {
            cout << i << "\n";
            path[j]=i;
            j++;
            dfs(m,v,i);
        }
        else if(m[source][i]==-1 && visited[i]==0)
        {
            cout << "path " << i << " is flooded. Re-routing... ";
            visited[i]=1;
        }
    }
}

int main()
{
  for(int i=0;i<v;i++)
  {
      visited[i]=0;
  }
  int source = 0;
  cout << "Finding routes : \n";
  cout << source << "\n";
  dfs(m,v,source);

  cout << "\n\nThus, alternate route : \n";
  cout << source << " ";
  for(int i=0;i<j;i++)
  {
      cout << path[i] << " ";
  }
  return 0;
}

