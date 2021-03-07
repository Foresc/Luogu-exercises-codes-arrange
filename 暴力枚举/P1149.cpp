/*
 * @FileName: P1149.cpp
 * @Author: Foresc
 * @Date: 2021/03/07 18:48:38
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0;
    int numc[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, gen[1000] = {6};
    cin >> n;

    for (int i = 1; i < 1000; ++i)
    {
        int tem = i;
        while (tem > 0)
        {
            gen[i] += numc[tem % 10];
            tem /= 10;
        }
    }

    for (int i = 0; i < 1000; ++i)
        for (int j = 0; j < 1000; ++j)
            if (i + j < 1000 && gen[i] + gen[j] + gen[i + j] + 4 == n)
                ++ans;

    cout << ans;
    return 0;
}