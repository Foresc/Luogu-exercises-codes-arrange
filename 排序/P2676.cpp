/*
 * @FileName: P2676.cpp
 * @Author: Foresc
 * @Date: 2021/02/20 10:48:43
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, height, ans = 0, tem = 0;
    cin >> n >> height;
    int cow[n];

    for (int i = 0; i < n; ++i)
        cin >> cow[i];

    sort(cow, cow + n);

    while (height > tem)
    {
        tem += cow[--n];
        ++ans;
    }

    cout << ans;
    return 0;
}