#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, m = 0, k = 0, x = 0, y = 0, ans = 0;
    cin >> n >> m >> k;
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        for (int i = 1; i <= 2; i++)                     // 判断火把上下左右是否超界
            if (y - i >= 1 && !a[x][y-i])
                a[x][y-i] = 1;
        for (int i = 1; i <= 2; i++)
            if (y + i <= n && !a[x][y+i])
                a[x][y+i] = 1;
        for (int i = 1; i <= 2; i++)
            if (x - i >= 1 && !a[x-i][y])
                a[x-i][y] = 1;
        for (int i = 1; i <= 2; i++)
            if (x + i <= n && !a[x+i][y])
                a[x+i][y] = 1;
        if (x + 1 <= n && y + 1 <= n && !a[x + 1][y + 1])   // 判断火把靠近的四个角是否超界
            a[x + 1][y + 1] = 1;
        if (x - 1 >= 1 && y + 1 <= n && !a[x - 1][y + 1])
            a[x - 1][y + 1] = 1;
        if (x + 1 <= n && y - 1 >= 1 && !a[x + 1][y - 1])
            a[x + 1][y - 1] = 1;
        if (x - 1 >= 1 && y - 1 >= 1 && !a[x - 1][y - 1])
            a[x - 1][y - 1] = 1;
        a[x][y] = 2;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        int tempx = x, tempy = y;
        for (int i = 0; i < 2; i++)                          // 找到萤石可照亮范围的左上角
        {
            if (x - 1 < 1 && y - 1 < 1)
                break;
            else if (y - 1 < 1)
                x--;
            else if (x - 1 < 1)
                y--;
            else
                x--, y--;
        }
        for (int i = x; i <= tempx+2; i++)
            for (int j = y; j <= tempy+2; j++)
                if(!a[i][j])
                    a[i][j] = 1;
        a[tempx][tempy] = 3;
    }
    for (int i = 1; i <= n; i++)//, cout << endl)           // 测试输出代码
        for (int j = 1; j <= n; j++)
        {
            //cout << a[i][j] << ' ';
            if (!a[i][j])
                ans++;
        }
    cout << ans;
    return 0;
}