//��������
//��������n���������ҳ���������ľ���ֵ����С����������������ǵĲ�ֵ�ľ���ֵ��
//�����ʽ
//���������һ�а���һ������n��
//�����ڶ��а���n������������������֮��ʹ��һ���ո�ָ���
//�����ʽ
//�������һ����������ʾ�𰸡�
//��������
//5
//1 5 4 8 20
//�������
//1
//����˵��
//���������С����������5��4������֮��Ĳ�ֵ��1��
//��������
//5
//9 3 6 1 3
//�������
//0
//����˵��
//������������ͬ����3������֮��Ĳ�ֵ��0.
//���ݹ�ģ��Լ��
//����������������������2 �� n �� 1000��ÿ���������������ǲ�����10000����������
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