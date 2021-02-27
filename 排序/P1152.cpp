/*
 * @FileName: P1152.cpp
 * @Author: Foresc
 * @Date: 2021/02/21 22:20:50
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tem;
    cin >> n;
    int arr[n], ans[n - 1] = {0};

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n - 1; ++i)
    {
        tem = abs(arr[i] - arr[i + 1]) - 1;
        if (tem < n - 1)
            ans[tem]++;
        if (tem >= n - 1 || ans[tem] != 1)      //判断有重复退出 (这个if顺序不能反)
        {
            cout << "Not jolly";
            exit(0);
        }
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (ans[i] == 0)        //判断有数字不存在退出
        {
            cout << "Not jolly";
            exit(0);
        }
    }
    
    cout << "Jolly";
    return 0;
}