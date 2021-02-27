/*
 * @FileName: P1068.cpp
 * @Author: Foresc
 * @Date: 2021/02/27 23:54:19
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int num;
    int score;
} vt;

bool camp(vt a, vt b)
{
    if (a.score == b.score)
        return a.num < b.num;
    else
        return a.score > b.score;
}

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    m = (m * 1.5) - 1;
    vt *a = new vt[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].num;
        cin >> a[i].score;
    }

    sort(a, a + n, camp);
    n = m;
    ans = m + 1;

    while (a[n].score == a[++n].score)
        ans++;

    cout << a[m].score << ' ' << ans << endl;

    for (int i = 0; i <= m; ++i)
        cout << a[i].num << ' ' << a[i].score << endl;

    while (a[m].score == a[++m].score)
        cout << a[m].num << ' ' << a[m].score << endl;

    return 0;
}