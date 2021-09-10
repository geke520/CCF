// ≥∆ºÏ≤‚µ„≤È—Ø
#include<bits/stdc++.h>
using namespace std;
int a=0,b=0;
void function(int n,int x[],int y[])
{
	long long d[n]={0};
	int min=0;
	int temp=0,index=0;
	for(int i=0;i<n;i++)
	{
		d[i]=(x[i]-a)*(x[i]-a)+(y[i]-b)*(y[i]-b);
	}
	min=d[0];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(min>d[j])
			{
				min=d[j];
				index=j;
//				cout << min<<" ";
			}
		}
		d[index]=2000000;
		min=d[index];
		cout << index+1 <<endl;
	}
}
int main()
{
	int n=0;
	cin >> n>>a>>b;
	int x[n]={0},y[n]={0};
	for(int i=0;i<n;i++)
		cin >> x[i] >>y[i];
	function(n,x,y);
	return 0;
}
