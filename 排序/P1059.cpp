/*
 * @FileName: P1059.cpp
 * @Author: Foresc
 * @Date: 2021/02/18 21:43:31
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans[1001] = {0}, n, tem, num = 0;   // 使用数组存储出现次数即可
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> tem;
        ans[tem]++;
        if (ans[tem] == 1)
            num++;
    }

    cout << num << endl;

    for (int i = 0; i < 1001; ++i)
        if (ans[i] > 0)
            cout << i << ' ';

    return 0;
}