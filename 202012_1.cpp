// 202012_1 期末预测之安全指数
#include<bits/stdc++.h>
using namespace std;
struct xiaoming
{
    int w=0;
    int score = 0;
};
void f(int n,xiaoming *a)
{
    int y = 0;
    for (int i = 0;i<n;i++)
    {
        y += (a[i].w * a[i].score);
    }
    if(y>0)
        cout << y;
    else
        cout << 0;
}
int main()
{
    int n=0;
    cin >> n;
    struct xiaoming ming[n];
    for(int i=0;i<n;i++)
        cin >> ming[i].w >>ming[i].score;
    f(n, ming);
    return 0;
}
