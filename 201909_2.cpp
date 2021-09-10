//小明种苹果（续） 
#include<bits/stdc++.h>
using namespace std;
#define N 1000
int queguo=0;
int que[N]={0};
int function(int k,int n,int a[])
{
	int sum=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<0)
			sum+=a[i];
		if(a[i]>0)
		{
			if(sum>a[i])
			{
//				cout <<sum<<" "<< a[i]<<endl;
				queguo++;
				sum=a[i];
				que[k]=1;
			}
		}
	}
	return sum;
}
int main()
{
	int n=0;
	int sum=0,san=0;
	cin >> n;
	int m[n]={0},max=0;
	int b[n]={0};
	for(int i=0;i<n;i++)
	{
		cin >> m[i];
		int a[m[i]]={0};
		for(int j=0;j<m[i];j++)
		{
			cin >> a[j];
		}
		sum+=function(i,m[i],a);
	}
	for(int k=0;k<n;k++)
	{
		if(que[k]==1)
		{
			if(que[k+1]==1)
			{	
				if(que[k+2]==1)
					san++;
				else if((k==0&&que[n-1]==1)||(k+1==n-1&&que[0]==1))
					san++;
			}
		}
	}
	cout << sum << " "<<queguo<<" "<<san;
	return 0;
}
