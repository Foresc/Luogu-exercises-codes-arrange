#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans[n + 1][n + 1];
    memset(ans, 0, sizeof(ans));

    for (int i = 1; i <= n; ++i)                // 初始赋值
        for (int j = 1; j <= n; ++j)
            ans[i][j] = (i - 1) * n + j;

    for (int i = 0; i < m; ++i)                 // 操作
    {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        int t = 2 * r + 1;
        int tem[t + 1][t + 1], scopy[t + 1][t + 1];

        for (int i = 0; i < t; ++i)             // 取值
            for (int j = 0; j < t; ++j)
                scopy[i + 1][j + 1] = ans[x - r + i][y - r + j];

        if (z)                                  // 翻转方阵
        {                                       // 逆时针
            for (int i = 1; i <= t; ++i)
                for (int j = 1; j <= t; ++j)
                    tem[t - j + 1][i] = scopy[i][j];
        }
        else
        {                                       // 顺时针
            for (int i = 1; i <= t; ++i)
                for (int j = 1; j <= t; ++j)
                    tem[j][t - i + 1] = scopy[i][j];
        }

        for (int i = 0; i < t; ++i)             // 赋值回去
            for (int j = 0; j < t; ++j)
                ans[x - r + i][y - r + j] = tem[i + 1][j + 1];
    }

    for (int i = 1; i <= n; ++i, cout << endl)
        for (int j = 1; j <= n; ++j)
            cout << ans[i][j] << " ";

    system("pause");
    return 0;
}