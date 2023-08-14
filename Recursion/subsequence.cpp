#include <bits/stdc++.h>
using namespace std;
void Print (vector<int> v)
{
for (int i=0; i<v.size();i++){
    cout <<v[i]<<" ";
}
}
//if asked to print only one subsequence then change return type of fucntion to boolean and then just peform every operation only if it return true else return false;
void sumOfSubsequence(int a[],vector<int>&list,int index,int n,int k,int sum)
{
    if(index==n)
    {
        if(sum==k)
        {Print(list);
        cout<<endl;}
        return;
    }
    list.push_back(a[index]);
    sum=sum+a[index];
    sumOfSubsequence(a,list,index+1,n,k,sum);
    list.pop_back();
    sum=sum-a[index];
    sumOfSubsequence(a,list,index+1,n,k,sum);
}
void subsequence(int a[],vector<int>&list,int index,int n)
{
    if(index==n)
    {
        Print(list);
        if(list.size()==0)
        cout<<"{}";
        cout<<endl;
        return;
    }
    list.push_back(a[index]);              //taking index value
    subsequence(a,list,index+1,n);
    list.pop_back();                      //skipping index value
    subsequence(a,list,index+1,n);
}

main()
{
    vector<int>v;
    int a[]={3,1,2};
    int size=sizeof(a)/sizeof(a[0]);
    sumOfSubsequence(a,v,0,size,3,0);
}