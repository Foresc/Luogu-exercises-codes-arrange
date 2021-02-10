#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n = 0, ans = 0, mark = 1;
    cin >> n;
    if(n == 1)
    {
        cout << 6;
        mark = 0;
    }
    int a[n + 1][n + 1], b[n + 1][n + 1], c[n + 1][n + 1], d[n + 1][n + 1], e[n + 1][n + 1];
    while (getchar() != 10);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            a[i][j] = getchar();
        while (getchar() != 10);
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            b[i][j] = getchar();
        if (i < n)
            while (getchar() != 10);
    }

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            c[i][j] = a[i][j];

    if(mark)
        while (ans != 3)                    // 90 180 270
        {
            int dif = 0;

            for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= n; ++j)
                    d[j][n - i + 1] = c[i][j];

            for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= n; ++j)
                    if (b[i][j] != d[i][j])
                    {
                        ++dif;
                        goto out1;
                    }

        out1:
            ++ans;
            if (dif)
            {
                for (int i = 1; i <= n; ++i)
                    for (int j = 1; j <= n; ++j)
                        c[i][j] = d[i][j];
            }
            else
            {
                mark = 0;
                break;
            }
        }

    if (mark)                               // 反转
    {
        int dif = 1;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                e[i][n - j + 1] = a[i][j];

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                if (b[i][j] != e[i][j])
                    dif = 0;

        ++ans;
        if (dif)
            mark = 0;
    }

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            c[i][j] = e[i][j];

    if (mark)                               // 组合123
    {
        for (int l = 0; l < 3; ++l)
        {
            int dif = 0;

            for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= n; ++j)
                    d[j][n - i + 1] = c[i][j];

            for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= n; ++j)
                    if (b[i][j] != d[i][j])
                    {
                        ++dif;
                        goto out2;
                    }

        out2:
            if (dif)
            {
                for (int i = 1; i <= n; ++i)
                    for (int j = 1; j <= n; ++j)
                        c[i][j] = d[i][j];
            }
            else
            {
                mark = 0;
                break;
            }
        }
        ++ans;
    }

    if (mark)                               // 一样
    {
        int dif = 1;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                if (a[i][j] != b[i][j])
                    dif = 0;

        ++ans;
        if (dif)
            mark = 0;
    }

    if (mark)                               // 无效转换
        ++ans;

    cout << ans;
    return 0;
}