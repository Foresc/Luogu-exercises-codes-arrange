/*
 * @FileName: P1781.cpp
 * @Author: Foresc
 * @Date: 2021/02/18 22:45:51
 */

#include <iostream>
#include <algorithm>
#include <string>
// #include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int key;
    int index;
    int num[105];
} s;

bool comp(s a, s b)
{
    if (a.index == b.index)               //如果票的位数相等
        for (int i = 0; i < a.index; ++i) //逐位对比
        {
            if (a.num[i] != b.num[i])
                return a.num[i] > b.num[i];
        }
    else
        return a.index > b.index;
}

int main()
{
    int n;
    cin >> n;
    s *p = new s[n];
    while(getchar() != '\n');

    for (int i = 0; i < n; ++i)
    {
        string in;
        getline(cin, in);
        for(int j=0; j<in.size(); ++j)
            p[i].num[j] = in[j] - '0';
        p[i].index = in.size();
        p[i].key = i + 1;
    }

    sort(p, p + n, comp);

    cout << p[0].key << endl;

    for (int i = 0; i < p[0].index; ++i)
        cout << p[0].num[i];

    delete [] p;
    return 0;
}