#include <bits/stdc++.h>
using namespace std;
struct Queue {
stack<int>sinp;
stack<int>sout;
void push(int x)
{
    sinp.push(x);
}
void pop()
{
    int i;
  
    if(sout.empty())
    {
         while(!sinp.empty())
        {sout.push(sinp.top());
        sinp.pop();}
    }
    else
    sout.pop();
}
int top()
{
    int i;
    if (sinp.empty() && sout.empty()) 
    {
            return -1;
    }
    if(sout.empty())
    {
        while(!sinp.empty())
        {sout.push(sinp.top());
        sinp.pop();}
    }
    return sout.top();
   
}
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.top();
    return 0;
}