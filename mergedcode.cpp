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

void heapify( vector<pair<int,int>>&h,int &n)
{
    int i,j,k;
    pair<int,int> v;
    bool heap;
    for(i=n/2; i>=1; i--)
    {
        k=i;
        v=h[k];
        heap=false;
        while(!heap && 2*k<=n)
        {
            j=2*k;
            if(j<n && h[j].second<h[j+1].second)
                j=j+1;
            if(v.second>=h[j].second)
                heap=true;
            else
            {
                h[k]=h[j];
                k=j;
            }
        }
        h[k]=v;
    }

}

void heapsort(vector<pair<int,int>>&h,int &n, vector<pair<int,int>>&d)
{
    while(h.size()!=0)
    {
        d.push_back(h[1]);
        swap(h[1],h[n]);
        h.pop_back();
        n--;
        heapify(h,n);
    }
}

int main()
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


    for(int i=0; i<v; i++)
    {
        visited[i]=0;
        path[i]=0;
    }

    cout << "\nFinding routes : \n";
    cout << source << " ";
    dfs(m,v,source);

    i=0;
    for(int j=0; j<v; j++)
    {
        if(m[j][i]==1)
            path[i]+=1;
    }

    cout << "\n\nLocations     critical level : \n";
    for(int i=0; i<=7; i++)
    {
        cout << i << "\t\t" << path[i] << "\n";
    }

    vector<pair<int,int>>h(1);
    int n=5,l=5;

    h.push_back({1,10});
    h.push_back({2,20});
    h.push_back({3,15});
    h.push_back({4,30});
    h.push_back({5,40});


    heapify(h,n);

    cout << "\n\nConsidering the input as the 'safety bar' : higher the value, higher the risk\n";
    cout << "\nZones before prioritization\n";

    for(int i=1; i<=l; i++)
    {
        cout << "Location : " << h[i].first << " , Risk " << h[i].second << "\n";
    }
    cout << "\n\nZones after prioritization\n";

    vector<pair<int,int>>d(1);
    heapsort(h,n,d);

    for(int i=1; i<=l; i++)
    {
        cout << "Location : " << d[i].first << " , Risk " << d[i].second << "\n";
    }

}
