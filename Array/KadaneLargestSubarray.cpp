#include<bits/stdc++.h>
using namespace std;
int largestSubarray(int a[],int n)    //kadane's algorithm
{
    int i,cur_max=0,max=INT_MIN;
    for(i=0;i<n;i++)
    {
        cur_max=cur_max+a[i];
        if(cur_max>max)
        max=cur_max;
        if(cur_max<0)
        cur_max=0;
    }
    return max;
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
    int array[]={-1, 3, -2, 2, 5};
    int sum;
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"Normal Array : ";
    display(array,size);
    sum=largestSubarray(array,size);
    cout<<"Largest Subarray Sum ="<<sum;
}