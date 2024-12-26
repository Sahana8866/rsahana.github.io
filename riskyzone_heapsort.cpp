#include<iostream>
#include<vector>
#include<stack>

using namespace std;

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
