/*
 * @FileName: P2241.cpp
 * @Author: Foresc
 * @Date: 2021/03/02 19:16:04
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    long long sum = 0, sq = 0, q = 0;
    cin >> x >> y;

    for (int i = 1; i <= x; ++i)
        for (int j = 1; j <= y; ++j)
        {
            sq += min(i, j);
            sum += i * j;
        }

    q = sum - sq;
    cout << sq << ' ' << q;
    return 0;
}