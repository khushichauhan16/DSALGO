#include <bits/stdc++.h>
using namespace std;
void reverse(int a[],int s,int e)
{
    if(s==e)
    return;
    int temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    reverse(a,s+1,e-1);
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"Normal Array: ";
    display(a,5);
    reverse(a,0,size-1);
    cout<<"Reverse Array: ";
    display(a,5);
}