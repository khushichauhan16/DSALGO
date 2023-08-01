#include<iostream>
using namespace std;
void EvenOdd(int a[],int n)
{
    int i,temp;
    for(i=1;i<n-1;i++)
    {
        if((i+1)%2==0)
            {
                if(a[i]<a[i+1])
                {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                }
            }
        else
            {
                if(a[i]>a[i+1])
                {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                }
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
    cout<<"Normal Array -";
    display(array,size);
    EvenOdd(array,size);
    cout<<"Array after rearranging-";
    display(array,size);
}