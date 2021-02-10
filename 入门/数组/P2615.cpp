#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, total = 0, x = 1, y = 1;
    cin >> n;
    total = n * n;
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));
    y = n / 2 + 1;                      // 永远从第一行中间开始
    a[x][y] = 1;
    for (int i = 2; i <= total; i++)
    {
        if (x - 1 < 1 && y + 1 > n)     // 判断是否在右上角
        {
            x++;
        }
        else if (x - 1 < 1)             // 判断下一个是否超出上边界
        {
            x = n;
            y++;
        }
        else if (y + 1 > n)             // 判断下一个是否超出右边界
        {
            y = 1;
            x--;
        }
        else if (!a[x - 1][y + 1])      // 判断右上位是否有值
        {
            x--;
            y++;
        }
        else                            // 正常情况
        {
            x++;
        }
        a[x][y] = i;                    // 赋值
    }
    for (int j = 1; j <= n; j++)        // 输出
    {
        for (int k = 1; k <= n; k++)
            cout << a[j][k] << " ";
        cout << endl;
    }
    return 0;
}