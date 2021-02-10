/*
 * @FileName: P1098.cpp
 * @Author: Foresc
 * @Date: 2021/02/08 23:24:28
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int p1, p2, p3, n1 = 0;
    cin >> p1 >> p2 >> p3;
    char t1, t2;

    while (getchar() != '\n');          // 字符串\n处理
    string in;
    getline(cin, in);

    for (int i = 0; i < in.size(); ++i)
    {
        if (in[i] == '-' && in[i + 1] - in[i - 1] == 1)
            continue;
        else if (in[i] == '-' && in[i - 1] < in[i + 1] && in[i + 1] - in[i - 1] < 27 && i != 0 && in[i + 1] != '-' && in[i - 1] != '-')
        {
            t1 = in[i - 1];
            t2 = in[i + 1];
            if(in[i - 1] > 64 && p1 == 2)
                n1 = -32;
            if (p3 == 1)
            {
                for (int i = t1 + 1; i < t2; ++i)   // 正序
                    for (int j = 0; j < p2; ++j)
                        if (p1 != 3)
                            cout << (char)(i + n1);
                        else
                            cout << '*';
            }
            else
            {
                for (int i = t2 - 1; i > t1; --i)   // 逆序
                    for (int j = 0; j < p2; ++j)
                        if (p1 != 3)
                            cout << (char)(i + n1);
                        else
                            cout << '*';
            }
        }
        else
            cout << in[i];
        n1 = 0;
    }

    return 0;
}