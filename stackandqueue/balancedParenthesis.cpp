#include <bits/stdc++.h>
using namespace std;
char openingBracket(char c)
{
    if(c==')') return '(';
    else if(c==']') return '[';
    else return '{';
}
//(s[i]==')'||s[i]==']'||s[i]=='}')
bool checkParenthesis(string s)
{
    stack<char>stack;
    int l,i;
    l=s.length();
   for(i=0;i<l;i++)
   {
    if(s[i]=='('||s[i]=='['||s[i]=='{')
    {
        stack.push(s[i]);
    }
    else
    {
        if(stack.empty()) 
        return false;
        else
        {
            if(stack.top()==openingBracket(s[i])) stack.pop();
            else return false;
        }
    }
   }
   if(stack.empty()) return true;
   else return false;
}
int main()
{
    cout<<(checkParenthesis("[ ) ( ]"));
}