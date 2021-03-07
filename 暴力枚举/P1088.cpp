/*
 * @FileName: P1088.cpp
 * @Author: Foresc
 * @Date: 2021/03/05 16:07:33
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans[n];

    for (int i = 0; i < n; ++i)
        cin >> ans[i];

    while (m--)
        next_permutation(ans, ans + n);

    for (int i = 0; i < n; ++i)
        cout << ans[i] << ' ';

    return 0;
}