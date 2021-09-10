// о║киоРа©
#include<bits/stdc++.h>
using namespace std;
void function(int u,int v,int a[][2],int b[][2])
{
	long long sum=0;
	int index=0;
	//yyds 
	for(int i=0,j=0;i<u&&j<v;)
    {
        if(a[i][0]<b[j][0]) 
			i++;
        else if(a[i][0]==b[j][0])
		{
			sum +=(a[i][1]*b[j][1]);
			i++;
			j++;
		}
        else 
			j++;
    }
//	for(int i=0;i<u+1;i++)
//	{
//		for(int j=index;j<v+1;j++)
//		{
//			if(b[j][0]==a[i][0])
//			{
//				sum +=(a[i][1]*b[j][1]);
//				index=j;
//			}
//		}
//	}
	cout << sum;
}
int main()
{
	int n=0,u=0,v=0;
	cin >> n>>u>>v;
	int a[u][2]={};
	int b[v][2]={};
	for(int i=0;i<u;i++)
	{
		cin >> a[i][0]>>a[i][1];
	}
	for(int j=0;j<v;j++)
	{
		cin >> b[j][0]>>b[j][1];
	}
	function(u,v,a,b);
	return 0;
}
