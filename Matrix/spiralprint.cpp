#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void printSpiral(int r,int c,int mat[R][C])
{
    int i,sr=0,sc=0;
    while(sr<r&&sc<c)
   {
    for(i=sc;i<c;i++)
    {
        cout<<mat[sr][i]<<" ";
    } 
    sr++;
    for(i=sr;i<r;i++)
    {
        cout<<mat[i][c-1]<<" ";
    }
    c--;
    if(sr<r)
    {
        for(i=c-1;i>=sc;--i)
    {
        cout<<mat[r-1][i]<<" ";
    }
    r--;
    }
    if(sc<c)
    {
    for(i=r-1;i>=sr;--i)
    {
        cout<<mat[i][sc]<<" ";
    }
    sc++;
    }
   }
}
int main()
{
    int mat[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printSpiral(4,4,mat);
}
