//��������
//�����������Ҫ����ͼ��ݵĹ�����������Ҫ��¼��ÿ����ߵĵ��������ÿλ������һ����ţ�ÿ����¼�ö��ߵı������ʾ��
//	�������ߵ����ü�¼������ÿһ����¼�еĶ����ǵڼ��γ��֡�
//�����ʽ
//��������ĵ�һ�а���һ������n����ʾ���εļ�¼������
//�����ڶ��а���n�����������α�ʾ���εļ�¼��ÿλ���ߵı�š�
//�����ʽ
//�������һ�У�����n���������ɿո�ָ������α�ʾÿ����¼�еĶ��߱���ǵڼ��γ��֡�
//��������
//5
//1 2 1 1 3
//�������
//1 1 2 3 1
//����������ģ��Լ��
//����1��n��1,000�����ߵı��Ϊ������n����������
#include<bits/stdc++.h>
using namespace std;
void function(int n,int a[])
{
	int b[n+1]={0};
	for(int i=0;i<n;i++)
	{
		b[a[i]]++;
		cout << b[a[i]] << " ";
	}		 
}
int main()
{
	int n=0;
	cin >> n;
	int a[n]={0};
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	function(n,a);
	return 0;
}