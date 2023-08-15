#include <bits/stdc++.h>
using namespace std;
//we can take a number more than once;
void Print (vector<int> v)
{
for (int i=0; i<v.size();i++){
    cout <<v[i]<<" ";
}
}
void combination(int a[],int sum,vector<int>&list,int index,int n)
{
    if(index==n)
    {
        if(sum==0)
        {Print(list);
        cout<<endl;}
        return;
    }
    if(a[index]<=sum)
    {list.push_back(a[index]);
    combination(a,sum-a[index],list,index,n);
    list.pop_back();}
    combination(a,sum,list,index+1,n);
}
main()
{
    vector<int>v;
    int a[]={2,3,4,7};
    int size=sizeof(a)/sizeof(a[0]);
    combination(a,7,v,0,4);
}