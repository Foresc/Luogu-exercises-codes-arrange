/*
 * @FileName: P1706.cpp
 * @Author: Foresc
 * @Date: 2021/03/05 15:47:47
 */

#include <iostream>
#include <algorithm>
#include <iomanip>
// #include <bits/stdc++.h>

using namespace std;

int n, k, ans[10], isu[10];

void dfs(int k)
{
    if (k > n)
    {
        for (int i = 1; i <= n; ++i)
            cout << setw(5) << ans[i];

        cout << endl;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!isu[i])
        {
            isu[i] = 1;
            ans[k] = i;
            dfs(k + 1);
            isu[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    dfs(1);
    return 0;
}