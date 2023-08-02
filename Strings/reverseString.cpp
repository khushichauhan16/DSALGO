#include<bits/stdc++.h>
using namespace std;

void reverse(string &str)
{
    int l,h,n=str.length();
    for(l=0,h=n-1;l<h;)
    {
        swap(str[l],str[h]);
        l++;h--;
    }
}

int main()
{
    string s="abcde";
    cout<<"Normal String: "<<s<<endl;
    reverse(s);
    cout<<"Reverse String: "<<s;
}