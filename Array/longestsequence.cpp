#include <bits/stdc++.h>
using namespace std;
int longestSequence(int a[],int n)
{
    sort(a,a+n);
    int i;
    int count=1,max=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]-1)
        {
            count=count+1;
        }
        else
        {
            if(max<count)
            max=count;
            count=1;
        }
    }
    return max;
}
main()
{
    int a[]={1,2,3,4,5,6,7,8,22};
    cout<<longestSequence(a,sizeof(a));
}