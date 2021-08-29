//问题描述
//　　给定n个数，请找出其中相差（差的绝对值）最小的两个数，输出它们的差值的绝对值。
//输入格式
//　　输入第一行包含一个整数n。
//　　第二行包含n个正整数，相邻整数之间使用一个空格分隔。
//输出格式
//　　输出一个整数，表示答案。
//样例输入
//5
//1 5 4 8 20
//样例输出
//1
//样例说明
//　　相差最小的两个数是5和4，它们之间的差值是1。
//样例输入
//5
//9 3 6 1 3
//样例输出
//0
//样例说明
//　　有两个相同的数3，它们之间的差值是0.
//数据规模和约定
//　　对于所有评测用例，2 ≤ n ≤ 1000，每个给定的整数都是不超过10000的正整数。
#include<bits/stdc++.h>
using namespace std;
void function(int n,int a[])
{
	int d=0,min=10000;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(min>abs(a[i]-a[j]))
			{
				min=abs(a[i]-a[j]);
			}	
		}
	}
	cout << min;
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
