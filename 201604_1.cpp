//������������
//	����n��������ʾһ���̵�����n��������������ĳ��֮ǰ������������������һ�����������٣������һ��Ϊ�۵㣬
//	���������֮ǰ���������ٶ���һ��������������Ҳ����һ��Ϊ�۵㡣�������춼�����۵㡣����ͼ�У���3��͵�6�����۵㡣
//	ͼ����http://118.190.20.162/view.page?gpid=T42
//��������n������a1, a2, ��, an��ʾ����������������Щ���ܹ��ж��ٸ��۵㡣
//����Ϊ�˼������壬���Ǹ��������ݱ�֤������n����������������������ǲ�ͬ�ģ���ai-1��ai��ע�⣬������첻���ڣ�������������ͬ��
//�����ʽ
//��������ĵ�һ�а���һ������n��
//�����ڶ��а���n���������ÿո�ָ����ֱ��ʾa1, a2, ��, an��
//�����ʽ
//�������һ����������ʾ�۵���ֵ�������
//��������
//7
//5 4 1 2 3 6 4
//�������
//2
//����������ģ��Լ��
//�������������������㣺1 �� n �� 1000��ÿ����������ǲ�����10000�ķǸ�������
#include<bits/stdc++.h>
using namespace std;
void function(int n,int a[])
{
	int t_point=0;
	for(int i=1;i<n-1;i++)
	{
		if((a[i+1]>a[i]&&a[i-1]>a[i])||(a[i+1]<a[i]&&a[i-1]<a[i]))
			t_point++;
	}
	cout << t_point;
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