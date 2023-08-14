#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int mid,int h)
{
    int i,j,k;
    int sl=mid-l+1;
    int sr=h-mid;
    int left[sl],right[sr];
    for(i=0;i<sl;i++)
    left[i]=a[l+i];
    for(i=0;i<sr;i++)
    right[i]=a[mid+i+1];
    i=0;j=0;k=l;
    while(i<sl&&j<sr)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }
        k++;
    }
    while (i<sl) 
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j<sr) 
    {
        a[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int a[],int l,int h)
{
    if(l>=h)
    return;
    int mid=l+(h-l)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,h);
    merge(a,l,mid,h);
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
    int a[]={12, 11, 13, 5, 6, 7};
    int size=sizeof(a)/sizeof(a[0]);
    display(a,size);
    mergeSort(a,0,(size-1));
    display(a,size);
}