#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include <unordered_map>
#include<math.h>
#include <bits/stdc++.h>
#define INF 99999

using namespace std;

unordered_map<string,string> impactmap;


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
