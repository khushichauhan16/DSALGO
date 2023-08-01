/*Using two pointer technique to solve pair sum problems*/
#include<iostream>
using namespace std;
void pairSum(int a[],int n,int sum)
{
    int i,j;
    for(i=0,j=n-1;i<j;)
    {
        if(a[i]+a[j]==sum)
            {
                cout<<"Pair element at position "<<i+1<<" and "<<j+1<<" sum to "<<sum<<endl;
                break;
            }
        else if(a[i]+a[j]<sum)
            {
                i++;
            }
        else
            {
                j--;
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
    int array[]={1, 3, 2, 2, 5};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"Array -";
    display(array,size);
    pairSum(array,size,5);
}
/**/