// ±¨Êý 
#include<bits/stdc++.h>
using namespace std;
void function(int n)
{
	int a[4]={0};
	for(int i=1;i<=n;i++)
	{
		if(i%4==1)
		{
			if(i%7==0||i/100==7||i%100/10==7||i/10==7||i%10==7)
			{
				a[0]++;
				n++;
			}
		}
		if(i%4==2)
		{
			if(i%7==0||i/100==7||i%100/10==7||i/10==7||i%10==7)
			{
				a[1]++;
				n++;
			}
			
		}
		if(i%4==3)
		{
			if(i%7==0||i/100==7||i%100/10==7||i/10==7||i%10==7)
			{
				a[2]++;
				n++;
			}
			
		}
		if(i>0&&i%4==0)
		{
			if(i%7==0||i/100==7||i%100/10==7||i/10==7||i%10==7)
			{
				a[3]++;
				n++;
			}
			
		}
	}
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3];
}
int main()
{
	int n=0;
	cin >> n;
	function(n);
	return 0;
 } 
