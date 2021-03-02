/*
 * @FileName: P5143.cpp
 * @Author: Foresc
 * @Date: 2021/03/01 22:58:37
 */

#include <iostream>
#include <algorithm>
#include <math.h>
// #include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int x;
    int y;
    int z;
} point;

bool camp(point a, point b)
{
    return a.z < b.z;
}

int main()
{
    int n;
    cin >> n;
    point *p = new point[n];

    for (int i = 0; i < n; ++i)
        cin >> p[i].x >> p[i].y >> p[i].z;

    sort(p, p + n, camp);

    double ans = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        ans += sqrt(pow(p[i].x - p[i+1].x, 2) + pow(p[i].y - p[i+1].y, 2) + pow(p[i].z - p[i+1].z, 2));
    }

    printf("%.3lf", ans);
    return 0;
}