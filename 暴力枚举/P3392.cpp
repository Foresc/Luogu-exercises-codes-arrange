/*
 * @FileName: P3392.cpp
 * @Author: Foresc
 * @Date: 2021/03/05 16:11:22
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, tem, ans = 50000;
    cin >> n >> m;
    char sq[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> sq[i][j];

    for (int i = 0; i < n - 2; ++i)
        for (int j = i + 1; j < n - 1; ++j)
        {
            tem = 0;

            for (int k = 0; k <= i; ++k)
                for (int l = 0; l < m; ++l)
                    if (sq[k][l] != 'W')
                        ++tem;

            for (int k = i + 1; k <= j; ++k)
                for (int l = 0; l < m; ++l)
                    if (sq[k][l] != 'B')
                        ++tem;

            for (int k = j + 1; k < n; ++k)
                for (int l = 0; l < m; ++l)
                    if (sq[k][l] != 'R')
                        ++tem;

            ans = min(tem, ans);
        }

    cout << ans;
    return 0;
}