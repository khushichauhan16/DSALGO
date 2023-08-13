#include <bits/stdc++.h>
using namespace std;
bool palindrome(string st,int s,int e)
{
    if(s>=e)
    return true;
    if(st[s]!=st[e])
    return false;
    return palindrome(st,s+1,e-1);            //functional recursion as it is returing its own function
}

main()
{
   string s="dad";
   bool result=palindrome(s,0,2);
    cout<<result;
}