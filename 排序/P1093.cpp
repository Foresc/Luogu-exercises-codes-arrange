/*
 * @FileName: P1093.cpp
 * @Author: Foresc
 * @Date: 2021/02/18 21:56:26
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int key;
    int chi;
    int mat;
    int eng;
    int sum;
} student;

bool comp(student a, student b)     //sort比较时会将两个变量单独拿出进行比较，所以不能写指针，返回 ture 为不需要交换
{
    if (a.sum == b.sum)
        if (a.chi == b.chi)
            return a.key < b.key;
        else
            return a.chi > b.chi;
    else
        return a.sum > b.sum;
}

int main()
{
    int n;
    cin >> n;
    student *arr = new student[n];

    for (int i = 0; i < n; ++i)
    {
        arr[i].key = i + 1;
        cin >> arr[i].chi;
        cin >> arr[i].mat;
        cin >> arr[i].eng;
        arr[i].sum = arr[i].chi + arr[i].mat + arr[i].eng;
    }

    sort(arr, arr + n, comp);

    for (int i = 0; i < 5; ++i)
        cout << arr[i].key << ' ' << arr[i].sum << endl;

    delete [] arr;
    return 0;
}