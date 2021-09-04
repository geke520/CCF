//问题描述
//　　小H和小W来到了一条街上，两人分开买菜，他们买菜的过程可以描述为，去店里买一些菜然后去旁边的一个广场把菜装上车，
//	两人都要买n种菜，所以也都要装n次车。具体的，对于小H来说有n个不相交的时间段[a1,b1],[a1,b1]...[an,bn]在装车，
//	对于小W来说有n个不相交的时间段[c1,d1],[c2,d2]...[cn,dn]在装车。其中，一个时间段[s, t]表示的是从时刻s到时刻t这段时间，时长为t-s。
//　　由于他们是好朋友，他们都在广场上装车的时候会聊天，他们想知道他们可以聊多长时间。
//输入格式
//　　输入的第一行包含一个正整数n，表示时间段的数量。
//　　接下来n行每行两个数ai，bi，描述小H的各个装车的时间段。
//　　接下来n行每行两个数ci，di，描述小W的各个装车的时间段。
//输出格式
//　　输出一行，一个正整数，表示两人可以聊多长时间。
//样例输入
//4
//1 3
//5 6
//9 13
//14 15
//2 4
//5 7
//10 11
//13 14
//样例输出
//3
//数据规模和约定
//　　对于所有的评测用例，1 ≤ n ≤ 2000, ai < bi < ai+1，ci < di < ci+1,对于所有的i(1 ≤ i ≤ n)有，1 ≤ ai, bi, ci, di ≤ 1000000。
#include<bits/stdc++.h>
using namespace std;
void function(int n,int a[],int b[],int c[],int d[])
{
	long int time=0;
	int maxx=0,minn=0;
	// 留下了激动地泪水，但是还是不建议分各种情况 
	/*for(int i=0;i<n;i++)
	{
		// 两层循环是为了保证一个人一个区间和多个区间相交 
		for(int j=0;j<n;j++)
		{
			if(a[i]<c[j]&&c[j]<b[i]&&b[i]<d[j])
				time+=(b[i]-c[j]);
			if(a[i]<=c[j]&&d[j]<=b[i])
				time+=(d[j]-c[j]);
			if(c[j]<a[i]&&a[i]<d[j]&&d[j]<b[i])
				time+=(d[j]-a[i]);
			if(c[j]<a[i]&&b[i]<d[j])
				time+=(b[i]-a[i]);
			if(c[j]==a[i]&&b[i]<d[j])
				time+=(b[i]-a[i]);
			if(c[j]<a[i]&&b[i]==d[j])
				time+=(b[i]-a[i]);
		}
	}*/
	// 这种是最棒的 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<=d[j]&&b[i]>=c[j])
			{
				maxx=max(a[i],c[j]);
		        minn=min(b[i],d[j]);
		        time+=(minn-maxx);
			}
		}
	}
	cout << time;
}
int main()
{
	int n=0;
	cin >> n;
	int a[n]={0},b[n]={0},c[n]={0},d[n]={0};
	for(int i=0;i<n;i++)
	{
		cin >> a[i]>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> c[i]>>d[i];
	}
	function(n,a,b,c,d);
	return 0;
}
