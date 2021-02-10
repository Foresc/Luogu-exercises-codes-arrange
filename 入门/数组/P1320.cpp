#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num = 0, ans = 0;
    char ch = '0';
    char a[200], fin[40000];
    scanf("%s", a);
    int n = strlen(a);
    strcat(fin, a);

    for (int i = 2; i <= n; i++)
    {
        scanf("%s", a);     // 以字符串形式读取一行数字
        strcat(fin, a);
    }

    cout << n << " ";

    for (int k = 0; k <= strlen(fin); k++)
    {
        if (ch == fin[k])   // 对比每个字母
            ans++;
        else
        {
            ch = fin[k];
            cout << ans << ' ';
            ans = 1;
        }
    }

    return 0;
}