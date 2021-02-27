/*
 * @FileName: P1116.cpp
 * @Author: Foresc
 * @Date: 2021/02/20 10:59:17
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int bubbleSort(int *array, int size)
{
    int lastSwapLoc = 0, swapTime = 0, tLoc = size - 1;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < tLoc; ++j)
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                lastSwapLoc = j;
                swapTime++;
            }

        if (lastSwapLoc == 0)
            break;
        tLoc = lastSwapLoc;
        lastSwapLoc = 0;
    }

    return swapTime;
}

int main()      //冒泡排序模板题
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << bubbleSort(arr, n);
    return 0;
}