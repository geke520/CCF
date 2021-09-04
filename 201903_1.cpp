// 最大数中位数最小数 
#include<bits/stdc++.h>
using namespace std;
void function(long long int n,long long int a[])
{
	double mid=0.0;
	int maximum=0,minimum=0;
	maximum=max(a[0],a[n-1]);
	minimum=min(a[0],a[n-1]);
	mid = n&1 ? a[(n-1)/2] : round((a[n/2]+a[n/2-1])/2.0*10)/10.0;
	if(mid-(int)mid == 0)    //判断中位数是不是整数
		cout << maximum << " "<<(int)mid<< " "<<minimum;
	else
		cout << maximum << " "<<mid<< " "<<minimum;
}
int main()
{
	long long int n=0;
	cin >> n;
	long long int a[n]={0};
	for(long long int i=0;i<n;i++)
		cin >>a[i];
	function(n,a);
	return 0;
}
