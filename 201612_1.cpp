//��������
//������һ����������a1, a2, ��, an�У��������ĳ��������������������������С���������������������Ϊ�м�����
//	��һ�������У����ܴ��ڶ���±겻��ͬ���м�������Щ�м�����ֵ����ͬ�ġ�����һ���������У����ҳ�����������е��м�����ֵ��
//�����ʽ
//��������ĵ�һ�а�����һ������n����ʾ�������������ĸ�����
//�����ڶ��а���n�������������α�ʾa1, a2, ��, an��
//�����ʽ
//�������Լ�����е��м������ڣ�������м�����ֵ���������-1��ʾ�������м�����
//��������
//6
//2 6 5 6 3 5
//�������
//5
//����˵��
//������5С������2������5�����Ҳ��2����
//��������
//4
//3 4 6 7
//�������
//-1
//����˵��
//�����������е�4�������������м����Ķ��塣
//��������
//5
//3 4 6 6 7
//�������
//-1
//����˵��
//�����������е�5�������������м����Ķ��塣
//����������ģ��Լ��
//����������������������1 �� n �� 1000��1 �� ai �� 1000��
#include<bits/stdc++.h>
using namespace std;
void function(int n,int a[])
{
	int lower[n]={0},higher[n]={0};
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
				higher[i]++;
			if(a[i]>a[j])
				lower[i]++;
		}
		if(higher[i]==lower[i])
		{
			flag=true;
			cout << a[i];
			break;
		}
	}
	if(!flag)
		cout << -1;
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