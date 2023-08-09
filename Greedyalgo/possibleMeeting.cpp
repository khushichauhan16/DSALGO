/*SORT THE END TIME ARRAY AND SWAP RESPECTIVE START TIME ARRAY AND ITS INDEX AND THEN IF END<STRAT OF NEXT THEN PUSH ITS INDEX 
TO RESULT ARRAY AND JUST DISPLAY....IN CASE OF SAME END TIME ,SORT ON BASIS OF INDEX*/


#include <bits/stdc++.h>
using namespace std;

class meeting
{
    public:
    int start;
    int end;
    int index;
};
bool comparator(meeting ob1,meeting ob2)
{
    if(ob1.end<ob2.end) return true;
    else if(ob1.end>ob2.end) return false;
    else if(ob1.index<ob2.index) return true;
    return false;
}
void possibleMeeting(int s[],int e[],int n)
{
    int i;
    meeting ob[n];
    for(i=0;i<n;i++)
    {
        ob[i].start=s[i];
        ob[i].end=e[i];
        ob[i].index=i+1;
    }
    sort(ob,ob+n,comparator);
    vector<int> result;
    int endTime=ob[0].end;
    result.push_back(ob[0].index);
    for(i=1;i<n;i++)
    {
        if(ob[i].start>endTime)
        {
            endTime=ob[i].end;
            result.push_back(ob[i].index);
        }
    }
    for(i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}
int main()
{
    int S[]={50,120,200,550,700,850};
    int E[]={500,550,600,700,900,1000};
    possibleMeeting(S,E,6);
    return 0;
}