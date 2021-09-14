//202009-2 风险人群筛查
#include<bits/stdc++.h>
using namespace std;
long long xl = 0, yd = 0, xr = 0, yu = 0;
int result2=0;
int f(int t,int k,long long x[],long long y[])
{
	int count1 = 0;
	int count2 = 0;
	int flag[t] = {0};
	for(int i=0;i<t;i++)
	{
		if(x[i]>=xl&&x[i]<=xr&&y[i]>=yd&&y[i]<=yu)
		{	
			count1++;
			flag[i] = 1;
			if(i==0)
				count2++;
			else if(flag[i-1]==0)
			{
				if(count2<k)
				{
					count2 = 1;
				}
			}
			if(flag[i-1]==1&&count2<k)
				count2++;
		}
	}
	if(count2>=k)
		result2++;
	// cout << "result2:" << result2 << endl;
	return count1;	
}
int main()
{
	int n=0,k=0,t=0;
	cin >> n>>k>>t>>xl>>yd>>xr>>yu;
	long long x[t]={0},y[t]={0};
	int result = 0, result1 = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<t;j++)
			cin >> x[j] >> y[j];
		result=f(t,k,x,y);
		if(result>0)
			result1++;
	}
	cout <<result1<<endl;
	cout <<result2;
	return 0;
} 
