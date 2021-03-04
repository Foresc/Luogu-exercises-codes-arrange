/*
 * @FileName: P2089.cpp
 * @Author: Foresc
 * @Date: 2021/03/03 13:20:04
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, j, in, ans = 0;
    cin >> in;
    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++)
            for (c = 1; c <= 3; c++)
                for (d = 1; d <= 3; d++)
                    for (e = 1; e <= 3; e++)
                        for (f = 1; f <= 3; f++)
                            for (g = 1; g <= 3; g++)
                                for (h = 1; h <= 3; h++)
                                    for (i = 1; i <= 3; i++)
                                        for (j = 1; j <= 3; j++)
                                            if (a + b + c + d + e + f + g + h + i + j == in)
                                                ans++;

    cout << ans << endl;

    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++)
            for (c = 1; c <= 3; c++)
                for (d = 1; d <= 3; d++)
                    for (e = 1; e <= 3; e++)
                        for (f = 1; f <= 3; f++)
                            for (g = 1; g <= 3; g++)
                                for (h = 1; h <= 3; h++)
                                    for (i = 1; i <= 3; i++)
                                        for (j = 1; j <= 3; j++)
                                            if (a + b + c + d + e + f + g + h + i + j == in)
                                                cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << j << endl;
    
    return 0;
}