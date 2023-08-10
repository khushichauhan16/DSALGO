/*sort the objects as per weight then if at any time the weightsum > required weight then just use a fraction 
of its value.*/


#include <bits/stdc++.h>
using namespace std;
class sack
{
    public:
    int weight;
    int value;
};
bool comparator(sack ob1,sack ob2)
{
    if(ob1.weight<=ob2.weight) return true;
    return false;
}
void maxValue(int v[],int w[],int max,int n)
{
    int i;
    sack ob[n];
    for(i=0;i<n;i++)
    {
        ob[i].weight=w[i];
        ob[i].value=v[i];
    }
    sort(ob,ob+n,comparator);
    int diff,frac,sum=0,valuesum;
    for(i=0;i<n;i++)
    {
        if((sum+w[i])>max)
        {
            diff=max-sum;
            frac=v[i]*diff/w[i];
            valuesum+=frac;
        }
        else
        {
            sum=sum+w[i];
            valuesum+=v[i];
    }
    }
    cout<<valuesum;
}
int main()
{
    
    int v[]={60,100,120};
    int w[]={10,20,30};
    int maxWt=50;
    maxValue(v,w,maxWt,3);
}
