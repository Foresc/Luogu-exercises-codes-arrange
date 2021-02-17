/*
 * @FileName: P1923.cpp
 * @Author: Foresc
 * @Date: 2021/02/17 18:16:36
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;
int arr[5000003], k;

int read()
{
    char c = getchar();
    int ret = 0;
    while (c < '0' || c > '9')
        c = getchar();
    while (c >= '0' && c <= '9')
    {
        ret = ret * 10 + (c - '0');
        c = getchar();
    }
    return ret;
}

void qs(int lo, int hi)
{
    int i = lo, j = hi, mi = arr[(lo + hi) >> 1];

    while (i <= j)
    {
        while (arr[j] > mi)
            j--;
        while (arr[i] < mi)
            i++;
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
            
    }
    if (k <= j)
        qs(lo, j);
    else if (i <= k)
        qs(i, hi);
    else
    {
        cout << arr[j + 1];
        exit(0);
    }
}

int main()
{
    int n;
    n = read();
    k = read();
    for (int i = 0; i < n; ++i)
        arr[i] = read();
    qs(0, n - 1);
    return 0;
}