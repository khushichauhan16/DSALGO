#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void transpose(int r,int c,int mat[R][C])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=i;j<c;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
}
void reverseCol(int r,int c,int mat[R][C])
{
    int i,p1,p2;
    for(i=0;i<c;i++)
    {
        for(p1=0,p2=r-1;p1<p2;)
        {
            swap(mat[p1][i],mat[p2][i]);
            p1++;
            p2--;
        }
    }
}
void display(int r,int c,int mat[R][C])
{
    int i,j;
    for(int i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mat[i][j]<<"  ";
        }
    cout<<"\n";
    }
}
int main()
{
    int mat[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"MATRIX BEFORE 90 DEGREE ROTATION:"<<endl;
    display(4,4,mat);
    transpose(4,4,mat);
    reverseCol(4,4,mat);
    cout<<"MATRIX AFTER 90 DEGREE ROTATION:"<<endl;
    display(4,4,mat);
}
