// ªÿ ’’æ—°÷∑
#include<bits/stdc++.h>
using namespace std;
void function(int n,long long a[][2])
{
	int a0=0,a1=0,a2=0,a3=0,a4=0;
	int count=0;
	int b[n]={0};
	int c[n]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][0]+1==a[j][0]&&a[i][1]==a[j][1])
				b[i]++;
			if(a[i][0]-1==a[j][0]&&a[i][1]==a[j][1])
				b[i]++;
			if(a[i][0]==a[j][0]&&a[i][1]+1==a[j][1])
				b[i]++;
			if(a[i][0]==a[j][0]&&a[i][1]-1==a[j][1])
				b[i]++;
		}
	}
	for(int k=0;k<n;k++)
	{
		if(b[k]==4)
		{
			count++;
			for(int x=0;x<n;x++)
			{
				if(a[k][0]+1==a[x][0]&&a[k][1]+1==a[x][1])
					c[k]++;
				if(a[k][0]-1==a[x][0]&&a[k][1]-1==a[x][1])
					c[k]++;
				if(a[k][0]-1==a[x][0]&&a[k][1]+1==a[x][1])
					c[k]++;
				if(a[k][0]+1==a[x][0]&&a[k][1]-1==a[x][1])
					c[k]++;
			}
		}
	}
	for(int y=0;y<n;y++)
	{
		a0=count-a1-a2-a3-a4;
		if(c[y]==1)
			a1++;
		if(c[y]==2)
			a2++;
		if(c[y]==3)
			a3++;
		if(c[y]==4)
			a4++;
	}
	cout << a0<<endl;
	cout << a1<<endl;
	cout << a2<<endl;
	cout << a3<<endl;
	cout << a4;
}
int main()
{
	int n=0;
	cin >> n;
	long long a[n][2];
	for(int i=0;i<n;i++)
	{
		cin >> a[i][0]>>a[i][1];
	}
	function(n,a);
	return 0;
}
 
