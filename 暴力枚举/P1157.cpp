/*
 * @FileName: P1157.cpp
 * @Author: Foresc
 * @Date: 2021/03/05 15:13:18
 */

#include <iostream>
#include <algorithm>
#include <iomanip>
// #include <bits/stdc++.h>

using namespace std;

int n, r, k, ans[21];

void dfs(int k)
{
    if (k > r)
    {
        for (int i = 1; i <= r; ++i)
            cout << setw(3) << ans[i];

        cout << endl;
        return;
    }

    for (int i = ans[k - 1] + 1; i <= n; ++i)
    {
        ans[k] = i;
        dfs(k + 1);
    }
}

int main()
{
    cin >> n >> r;
    dfs(1);
    return 0;
}