#include<iostream>
#include<algorithm>

using namespace std;

int partition(int congestion[],int l,int r)
{
    int i=l,j=r+1,p=congestion[l];
    do
    {
        do
        {
            i++;
        }
        while(congestion[i]<p);
        do
        {
            j--;
        }
        while(congestion[j]>p);
        swap(congestion[i],congestion[j]);
    }
    while(i<j);
    swap(congestion[i],congestion[j]);
    swap(congestion[l],congestion[j]);
    return j;
}

void quicksort(int congestion[],int l,int r)
{
    if(l<r)
    {
        int s=partition(congestion,l,r);
        quicksort(congestion,l,s-1);
        quicksort(congestion,s+1,r);
    }
}

int main()
{
    int congestion[] = {5,60,7,0,9},n=5;
    quicksort(congestion,0,n-1);
    cout << "Ranked intersection by congestion levels : \n ";
    for(int i=0; i<n; i++)
    {
        cout << congestion[i] << " ";
    }
    cout << endl;
    return 0;
}
