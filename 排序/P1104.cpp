/*
 * @FileName: P1104.cpp
 * @Author: Foresc
 * @Date: 2021/03/02 15:31:56
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

typedef struct
{
    string name;
    int year;
    int month;
    int day;
} p;

bool camp(p a, p b)
{
    if (a.year == b.year)
        if (a.month == b.month)
            return a.day <= b.day;
        else
            return a.month < b.month;
    else
        return a.year < b.year;
}

int main()
{
    int n;
    cin >> n;
    p *s = new p[n];

    for (int i = 0; i < n; ++i)
        cin >> s[i].name >> s[i].year >> s[i].month >> s[i].day;

    stable_sort(s, s + n, camp);

    for (int i = 0; i < n; ++i)
        cout << s[i].name << endl;

    return 0;
}