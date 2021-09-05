//小明种苹果
#include<bits/stdc++.h>
using namespace std;
void function(int n,int m,int *a)
{
	int b[n]={0}; 
	int sum0=0;
	int sum_all=0;
	int max=0;
	int num=0;
//	cout << a[0*m+0];
	for(int i=0;i<n;i++)
	{
		sum0+=a[i*m+0];
		for(int j=1;j<m;j++)
		{
			b[i]+=abs(a[i*m+j]);
		}
		sum_all+=b[i];
	}
//	cout << " "<<sum0<<" ";
	for(int k=0;k<n;k++)
	{
		if(max<b[k])
		{
			max=b[k];
			num=k;
		}
	}
	sum0=sum0-sum_all;
	cout << sum0 <<" "<< num+1<<" " << max;	
}
int main()
{
	int n=0,m=0;
	cin >> n >>m;
	int a[n][m+1]={{0}};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m+1;j++)
		{
			cin >> a[i][j];
		}
	}
	function(n,m+1,(int*)a);
	return 0;
}
