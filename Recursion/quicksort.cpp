#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h)         //quick sort is used over merge sort as it does not use extra temp array space and has same nlogn time complexity.
{
    int pivot=a[l];
    int left=l,right=h;
    while(left<right)
    {
        while(a[left]<=pivot&&left<=h)left++;
        while(a[right]>pivot&&right>=l)right--;
        if(left<right)
        swap(a[left],a[right]);
    }
    swap(a[l],a[right]);
    return right;
}

void quickSort(int a[],int l,int h)
{
    if(l>=h)
    return;
    int part=partition(a,l,h);
    quickSort(a,l,part-1);
    quickSort(a,part+1,h);
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
    quickSort(a,0,(size-1));
    display(a,size);
}
