//example of multiple recursive call
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
main()
{
    cout<<fibonacci(4);
}