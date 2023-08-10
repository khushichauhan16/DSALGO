#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int m,int n)
{
    int i=m-1;
    int j=0;
    while(i>=0&&j<n)
    {
        if(a[i]>b[j])
        {
            int temp=a[i];
            a[i]=b[j];
            b[j]=temp;
            i--;j++;
        }
        else
        break;
    }
    sort(a,a+m);
    sort(b,b+n);
    for(i=0;i<m+n;i++)
    {
        if(i<m)
        cout<<a[i]<<" ";
        else
        cout<<b[i-m]<<" ";
    }
}


int main()
{
    
    int a[]={1,3,5,7,9};
    int b[]={0,2,4,4,6,8};
    merge(a,b,5,6);
}