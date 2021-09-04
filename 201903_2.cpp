// 二十四点 
#include<bits/stdc++.h>
using namespace std;
int n=0;
char str[10];
stack<int> num;
stack<char> sign;
int main()
{
    cin >> n;
//    getchar();
    while(!num.empty()) num.pop();
    while(!sign.empty()) sign.pop();
    for(int i=0;i<n;i++)
    {
        gets(str);
        int j=0;
        while(j<strlen(str))
        {
            if(str[j]>'0'&&str[j]<='9')
            {
                num.push(str[j]-'0');
            }
            else if(str[j]=='+')
            {
                sign.push('+');
            }
            else if(str[j]=='-')
            {
                j++;
                num.push((-1)*(str[j]-'0'));
                sign.push('+');
            }
            else if(str[j]=='x')
            {
                int q=num.top();
                num.pop();
                j++;
                int p=str[j]-'0';
                num.push(q*p);
            }
            else if(str[j]=='/')
            {
                int q=num.top();
                num.pop();
                j++;
                int p=str[j]-'0';
                num.push(q/p);
            }
            j++;
        }
        while(!sign.empty())
        {
            int q=num.top();
            num.pop();
            int p=num.top();
            num.pop();
            sign.pop();
            num.push(q+p);
        }
        if(num.top()==24) 
			cout << "Yes" <<endl;
        else
			cout << "No"<<endl;
    }
    return 0;
}
