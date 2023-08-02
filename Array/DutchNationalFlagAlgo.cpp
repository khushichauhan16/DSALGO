#include<bits/stdc++.h>
using namespace std;
void sortZeroOneTwo(int a[],int n)    //kadane's algorithm
{
    int i,l=0,mid=0,h=n-1;
    for(i=0;i<n,mid<=h;i++)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[l]);l++;mid++;
        }
        if(a[mid]==2)
        {
            swap(a[mid],a[h]);h--;
        }
        if(a[mid]==1)
        {
            mid++;
        }
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int array[]={1,2,0,2,1,0,0,2,1,2,1,0};
    int sum;
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"Normal Array : ";
    display(array,size);
    sortZeroOneTwo(array,size);
    cout<<"Sorted Array=";
    display(array,size);
}