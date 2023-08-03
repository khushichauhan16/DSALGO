#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

int maxHist(int hist[], int n)
{
	stack<int> s;
    int maxArea = 0;
	int tp;
	int areaAtTop; 
	int i = 0;
	while (i < n) {
		if (s.empty() || hist[s.top()] <= hist[i])
			s.push(i++);
		else {
			tp = s.top(); 
			s.pop(); 
			areaAtTop = hist[tp]* (s.empty() ? i : i - s.top() - 1);
			if (maxArea < areaAtTop)
				maxArea = areaAtTop;
		}
	}
	while (s.empty() == false) {
		tp = s.top();
		s.pop();
		areaAtTop = hist[tp] * (s.empty() ? i : i - s.top() - 1);

		if (maxArea < areaAtTop)
			maxArea = areaAtTop;
	}

	return maxArea;
}
int maxRectangle(int r,int c,int a[R][C])
{
    int i,j,result=maxHist(a[0],c);
    for(i=1;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            a[i][j]+=a[i-1][j];
        }
        result=max(result,maxHist(a[i],c));
    }
    return result;
}

int main()
{
    int mat[][C] = {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 }};
        cout<<"Maximum area rectangle in matrix :"<<maxRectangle(4,4,mat);
}
