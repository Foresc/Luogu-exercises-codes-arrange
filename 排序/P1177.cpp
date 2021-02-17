/*
 * @FileName: P1177.cpp
 * @Author: Foresc
 * @Date: 2021/02/16 22:46:34
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int partition(int *array, int lo, int hi)
{
    int pivot = array[(lo + hi) >> 1];
    swap(array[lo], array[(lo + hi) >> 1]);
    while (lo < hi)
    {
        while ((lo < hi) && (pivot <= array[hi]))
            hi--;
        array[lo] = array[hi];
        while ((lo < hi) && (pivot > array[lo]))
            lo++;
        array[hi] = array[lo];
    }
    array[hi] = pivot;
    return hi;
}

void quickSort(int *array, int lo, int hi)
{
    if (hi - lo < 2)
        return;
    int mi = partition(array, lo, hi - 1);
    quickSort(array, lo, mi);
    quickSort(array, mi + 1, hi);
}

int main()
{
    int n;
    cin >> n;
    int ans[n];

    for (int i = 0; i < n; ++i)
        scanf("%d", &ans[i]);

    quickSort(ans, 0, n);

    for (int i = 0; i < n; ++i)
        printf("%d ", ans[i]);

    return 0;
}