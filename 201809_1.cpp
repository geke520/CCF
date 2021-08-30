//问题描述
//　　在一条街上有n个卖菜的商店，按1至n的顺序排成一排，这些商店都卖一种蔬菜。
//　　第一天，每个商店都自己定了一个价格。店主们希望自己的菜价和其他商店的一致，第二天，每一家商店都会根据他自己和相邻商店的价格调整自己的价格。
//	  具体的，每家商店都会将第二天的菜价设置为自己和相邻商店第一天菜价的平均值（用去尾法取整）。
//　　注意，编号为1的商店只有一个相邻的商店2，编号为n的商店只有一个相邻的商店n-1，其他编号为i的商店有两个相邻的商店i-1和i+1。
//　　给定第一天各个商店的菜价，请计算第二天每个商店的菜价。
//输入格式
//　　输入的第一行包含一个整数n，表示商店的数量。
//　　第二行包含n个整数，依次表示每个商店第一天的菜价。
//输出格式
//　　输出一行，包含n个正整数，依次表示每个商店第二天的菜价。
//样例输入
//8
//4 1 3 1 6 5 17 9
//样例输出
//2 2 1 3 4 9 10 13
//数据规模和约定
//　　对于所有评测用例，2 ≤ n ≤ 1000，第一天每个商店的菜价为不超过10000的正整数。
#include<bits/stdc++.h>
using namespace std;
void function(int n,int a[])
{
	int b[n]={0};
	for(int k=0;k<n;k++)
	{
		b[k]=a[k];
	}
	b[0]=(a[0]+a[1])/2;
	b[n-1]=(a[n-2]+a[n-1])/2;
	for(int i=1;i<n-1;i++)
	{
		b[i]=(a[i-1]+a[i]+a[i+1])/3;
	}
	for(int j=0;j<n;j++)
	{
		cout << b[j] << " ";
	}
}
int main()
{
	int n=0;
	cin >> n;
	int a[n]={0};
	for(int i=0;i<n;i++)
		cin >> a[i];
	function(n,a);
	return 0; 
}
