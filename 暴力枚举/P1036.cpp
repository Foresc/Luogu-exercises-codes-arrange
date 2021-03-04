/*
 * @FileName: P1036.cpp
 * @Author: Foresc
 * @Date: 2021/03/03 15:01:40
 */

#include <iostream>
#include <algorithm>
#include <math.h>
// #include <bits/stdc++.h>

using namespace std;

int n, k, ans, num[20];

bool prime(int x)
{
    for (int i = 2; i <= floor(sqrt(x)); ++i)
        if (x % i == 0)
            return false;

    return true;
}

void rec(int str, int cnt, int sum)
{
    if (cnt == k && prime(sum))
        ans++;

    for (int i = str; i <= n; ++i)
        rec(i + 1, cnt + 1, sum + num[i]);
}

int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> num[i];

    rec(1, 0, 0);

    cout << ans << endl;
    return 0;
}