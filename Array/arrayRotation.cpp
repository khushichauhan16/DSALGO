#include<iostream>
using namespace std;
void leftRotate(int a[],int n,int timesOfRotation)
{
    int temp,i,j;
    for(j=0;j<timesOfRotation;j++)
    {
    temp=a[0];
    for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
    a[n-1]=temp;
    }
}
void rightRotate(int a[],int n,int timesOfRotation)
{
    int temp,i,j;
    for(j=0;j<timesOfRotation;j++)
    {
    temp=a[n-1];
    for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
    a[0]=temp;
    }
}
void showArray(int a[],int n)
{
    int i;
    cout<<"Array After rotation :";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    leftRotate(array,size,2);
    rightRotate(array,size,1);
    showArray(array,size);
    return 0;
}