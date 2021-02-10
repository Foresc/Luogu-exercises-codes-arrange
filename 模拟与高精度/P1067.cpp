/*
 * @FileName: P1067.cpp
 * @Author: Foresc
 * @Date: 2021/02/08 22:50:58
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n + 1];
    for (int i = 0; i <= n; ++i)
        cin >> num[i];

    for (int i = 0; i <= n; ++i)
    {
        if (num[i] == 0)
            continue;
        if (num[i] > 0 && i != 0)
            cout << '+';
        if (num[i] == 1 && i != n)
        {
        }
        else if (num[i] == -1 && i != n)
            cout << '-';
        else
            cout << num[i];
        if (n - i == 1)
            cout << "x";
        else if (i != n)
            cout << "x^" << n - i;
    }

    system("pause");
    return 0;
}