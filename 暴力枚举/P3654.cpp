/*
 * @FileName: P3654.cpp
 * @Author: Foresc
 * @Date: 2021/03/05 16:45:44
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, k, ans = 0;
    cin >> r >> c >> k;
    char sq[r][c];

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> sq[i][j];

    if(k == 1)
    {
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                if (sq[i][j] == '.')
                    ++ans;
    }
    else 
    {
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (sq[i][j] == '.')
                {
                    int temh = 1, tems = 1;

                    for (int l = 1; l < k; ++l)
                    {
                        if (j + l >= c || sq[i][j + l] != '.')
                            temh = 0;
                        if (i + l >= r || sq[i + l][j] != '.')
                            tems = 0;
                    }

                    if (temh)
                        ++ans;
                    if (tems)
                        ++ans;
                }
            }
        }
    }

    cout << ans;
    return 0;
}