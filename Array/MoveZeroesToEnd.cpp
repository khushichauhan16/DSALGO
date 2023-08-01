#include<iostream>
using namespace std;
void moveZeroToEnd(int a[],int n)
{
    int i,temp,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
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
    int array[]={5, 6, 0, 4, 6, 0, 9, 0, 8};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"Normal Array -";
    display(array,size);
    moveZeroToEnd(array,size);
    cout<<"Array after moving zeroes to end-";
    display(array,size);
}