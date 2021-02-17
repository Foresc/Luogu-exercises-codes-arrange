/*
 * @FileName: P1271.cpp
 * @Author: Foresc
 * @Date: 2021/02/14 15:10:06
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

void merge(int *array, int lo, int mi, int hi)      //归并排序
{
    int *a = array + lo;
    int lb = mi - lo;
    int *b = new int[lb];
    for (int i = 0; i < lb; ++i)
        b[i] = a[i];
    int lc = hi - mi;
    int *c = array + mi;

    for (int i = 0, j = 0, k = 0; j < lb;)
    {
        if (k < lc && c[k] < b[j])
            a[i++] = c[k++];
        if (lc <= k || b[j] <= c[k])
            a[i++] = b[j++];
    }

    delete[] b;
}

void mergeSort(int *array, int lo, int hi)
{
    if (hi - lo < 2)
        return;
    int mi = hi + lo >> 1;
    mergeSort(array, lo, mi);
    mergeSort(array, mi, hi);
    merge(array, lo, mi, hi);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int *array = new int[m];

    for(int i=0; i<m; ++i)
        cin >> array[i];

    mergeSort(array, 0, m);
    //sort(array, array + m);       //简单的 STL
    
    for (int i = 0; i < m; ++i)
        cout << array[i] << ' ';
    
    delete [] array;
    return 0;
}