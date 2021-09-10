// 线性分类器
#include<bits/stdc++.h>
using namespace std;
void function(int n,long long a[],long long b[],char c[],long long d[3])
{
	long long A0=0;
	long long B0=0;
	bool A1=false;
	bool B1=false;
	for(int i=0;i<n;i++)
	{
		if(c[i]=='A'&&A0==0)
		{
			A0 = d[0]+a[i]*d[1]+b[i]*d[2];
			if(A0>0)
				A1=true;
			if(A0<0)
				A1=false;
			if(A0==0)
			{
				cout <<"No"<<endl;
				return;
			}
		}
		if(c[i]=='B'&&B0==0)
		{
			B0 = d[0]+a[i]*d[1]+b[i]*d[2];
			if(B0>0)
				B1=true;
			if(B0<0)
				B1=false;
			if(B0==0)
			{
				cout <<"No"<<endl;
				return;
			}
		}
		if(A1&&B1)
		{
			cout <<"No"<<endl;
			return;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(c[i]=='A')
		{
			A0 = d[0]+a[i]*d[1]+b[i]*d[2];
			if(A0==0||(A0>0&&(A1==false))||(A0<0&&(A1==true)))
			{
				cout << "No"<<endl;
				return;
			}
		}
		if(c[i]=='B')
		{
			B0 = d[0]+a[i]*d[1]+b[i]*d[2];
			if(B0==0||(B0>0&&(B1==false))||(B0<0&&(B1==true))) 
			{
				cout <<"No"<<endl;
				return;
			}
		}
	}
	cout << "Yes"<<endl;
}
int main()
{
	int n=0,m=0;
	cin >> n >>m;
	long long a[n]={0},b[n]={0},d[3]={0};
	char c[n]={};
	for(int i=0;i<n;i++)
		cin >> a[i]>>b[i]>>c[i];
	for(int j=0;j<m;j++)
	{
		cin >> d[0] >>d[1]>>d[2];
		function(n,a,b,c,d);
	}
	return 0;
}
