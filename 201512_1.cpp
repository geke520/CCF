//��������
//��������һ��ʮ��������n�����n�ĸ�λ����֮�͡�
//�����ʽ
//��������һ������n��
//�����ʽ
//�������һ����������ʾ�𰸡�
//��������
//20151220
//�������
//13
//����˵��
//����20151220�ĸ�λ����֮��Ϊ2+0+1+5+1+2+2+0=13��
//����������ģ��Լ��
//�������������������㣺0 �� n �� 1000000000��
#include<bits/stdc++.h>
using namespace std;
void sum(string s)
{
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
		sum+=(s[i]-48);
	} 
	cout << sum;
}
int main()
{
	string s="";
	cin >> s;
	sum(s);
	return 0;
}