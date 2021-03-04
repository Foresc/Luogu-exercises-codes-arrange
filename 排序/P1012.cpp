/*
 * @FileName: P1012.cpp
 * @Author: Foresc
 * @Date: 2021/03/02 17:00:40
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

bool camp(string a, string b)
{
    return a+b > b+a;
}

int main()
{
    int n;
    cin >> n;
    string *ans = new string[n];

    for (int i = 0; i < n; ++i)
        cin >> ans[i];

    sort(ans, ans + n, camp);

    for(int i=0; i<n; ++i)
        cout << ans[i];

    return 0;
}