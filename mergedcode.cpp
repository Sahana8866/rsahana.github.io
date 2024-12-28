#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include <unordered_map>
#include<math.h>
#include <bits/stdc++.h>
#define INF 99999


using namespace std;

int visited[10],v=8,m[10][10]= {{0,0,1,0,0,0,0,0},
    {0,0,1,1,0,0,0,0},
    {1,1,0,1,0,0,0,0},
    {0,1,1,0,1,1,0,0},
    {0,0,0,1,0,1,1,0},
    {0,0,0,1,1,0,1,0},
    {0,0,0,0,1,1,0,1},
    {0,0,0,0,0,0,1,0}
};
int path[10],j=0;
const int vert = 4;
unordered_map<string,string> impactmap;

// --------------2----------

void changes(unordered_map<string,string>&impactmap)
{
    int n;
    string s;
    cout << "Enter zone number, and new severity\n";
    cin >> n;
    cin.ignore();
    getline(cin,s);
    string zone = "zone "+to_string(n);
    auto it=impactmap.find(zone);
    if(it!=impactmap.end())
    {
        impactmap[zone]=s;
    }
    else
        cout << "Zone not found\n";
}

void deletezone(unordered_map<string,string>&impactmap)
{
    int n;
    cout << "Enter Zone number\n";
    cin >> n;
    string zone = "zone " + to_string(n);
    auto it = impactmap.find(zone);
    if (it != impactmap.end())
    {
        impactmap.erase(it);
        cout << "Zone deleted\n";
    }
    else
        cout << "Zone not found\n";
}

void searchzone(unordered_map<string,string>&impactmap)
{
    int n;
    cout << "Enter Zone number\n";
    cin >> n;
    string zone = "zone "+to_string(n);
    auto it = impactmap.find(zone);
    if (it != impactmap.end())
    {
        cout << "Zone found\n";
        cout << zone << " : " << impactmap[zone] << endl;
    }
    else
        cout << "Zone not found\n";
}

void hashingdisplay(unordered_map<string,string>&impactmap)
{
    if(impactmap.empty())
    {
        cout << "No zones available\n";
    }
    for(auto &pair:impactmap)
    {
        cout << pair.first << " : " << pair.second << endl;
    }
    cout << endl;
}

void addzone(unordered_map<string,string>&impactmap)
{
    cout << "Enter zone number and severity level\n";
    int n;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    string newzone = "zone " + to_string(n);
    impactmap[newzone] = s;
    cout << "New zone added :)\n\n";
}

void hashing_2(int *c)
{
    if(*c==0)
    {
        impactmap["zone 1"] = "High";
        impactmap["zone 2"] = "Medium";
        impactmap["zone 3"] = "Low";
        impactmap["zone 4"] = "Low";
    }

    cout << "Impacted areas and their severity level : \n\n";
    hashingdisplay(impactmap);
    int ch,zone;

    while(1)
    {
        cout << "\n\nWould you like to make any adjustments?\n0. None\n1. Delete zone\n2. Change Severity\n3. Display\n4. Add a zone\n5. Search for a zone\n\n";
        cin >> ch;
        switch(ch)
        {
        case 0:
            return;
            break;
        case 1:
            if(impactmap.empty())
            {
                cout << "No zones available\n";
            }
            else
                deletezone(impactmap);
            break;
        case 2:
            changes(impactmap);
            break;
        case 3:
            hashingdisplay(impactmap);
            break;
        case 4:
            addzone(impactmap);
            break;
        case 5:
            searchzone(impactmap);
            break;
        default :
            cout << "Invalid Choice\n";
            break;
        }
    }
}


// -----------4-------------

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


void dfs_10()
{
    int i=0,source=0;
    for(int i=0; i<v; i++)
    {
        visited[i]=0;
        path[i]=0;
    }

    cout << "\nFinding routes : \n";
    cout << source << " ";
    dfs(m,v,source);

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
}

int main()
{

    int ch,c=0;

    while(1)

    {
        cout << "\n\n0.  Exit\n1. Disaster Impact Mapping (Hashing)\n";
        cout << "2.  Dynamic Resource Allocation (Bellman Ford)\n";
        cout << "3. Critical Infrastructure Identification (DFS)";
        cin >> ch;

        if (ch==1)
        {
            hashing_2(&c);
            c=1;
        }
        else if (ch==2)
        {
            bellmanford_4();

        }
        else if (ch==3)
        {
            dfs_10();

        }
        else if (ch==0)
        {
            cout << "Thank you for your time! This System is always at your service!\nExiting...\n";
            exit(0);
        }
        else
        {
            cout << "Invalid Choice, please choose among the above options\n";
        }

    }
    return 0;
}
