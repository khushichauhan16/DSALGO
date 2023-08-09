/*SORT ARRIVAL AND DEPARTURE ARRAY.....USE TWO POINTER AND CHECK IF ARRIVAL IS GREATER THAN DEP THEN INCREMENT PLATFORM 
AND VICE-VERSA .....ALSO KEEP TRACK OF MAX PLATFORM THAT USED THROUGHOUT THE LOOP.*/

#include <bits/stdc++.h>
using namespace std;
int maxPlatform(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int max=1,p=1,i=1,j=0;    //assumed that [0] train arrived.
    while(i<n&&j<n)
    {
        if(arr[i]<=dep[j])
        {p++;i++;}
        else if(arr[i]>dep[j])
        {p--;j++;}
        if(max<p)
        max=p;
    }
    return max;
}
int main()
{
    int A[]={50,120,200,550,700,850};
    int D[]={500,550,600,700,900,1000};
    cout<<maxPlatform(A,D,6);
    return 0;
}
