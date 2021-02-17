/*
 * @FileName: P1249.cpp
 * @Author: Foresc
 * @Date: 2021/02/14 14:33:11
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, head = 0, ahead = 0, tem = 2;
    int num[200], ans[10000] = {1};
    cin >> n;

    if(n == 3)
    {
        cout << "1 2" << endl << "2";
        return 0;
    }
    else if(n == 4)
    {
        cout << "1 3" << endl << "3";
        return 0;
    }

    while (sum < n)
    {
        num[head] = tem;    //将数分开，由于要求分成不同的自然数，所以只要计算2+3+4+....
        sum += tem;         //何时第一次大于该数，然后求出大多少，将那个数从分解列表中去除即可
        ++tem;
        ++head;
    }

    if (sum - n >= 2)        //余数不为 1将那个数改为 1，不影响运算
        num[sum - n - 2] = 1;

    if(sum - n == 1)        //余数为 1
    {
        num[0] = 1;
        num[head - 1] += 1;
    }


    for (int i = 0; i < head; ++i)
    {
        if(num[i] == 1)
            continue;
            
        for (int j = 0; j <= ahead; ++j)
            ans[j] *= num[i];

        for (int j = 0; j <= ahead; ++j)
        {
            if (j == ahead && ans[ahead] > 9)
                ++ahead;
            if (ans[j] > 9)
            {
                ans[j + 1] += ans[j] / 10;
                ans[j] %= 10;
            }
        }
    }

    for (int i = 0; i < head; ++i)
        if (num[i] != 1)
            cout << num[i] << ' ';

    cout << endl;

    for (int i = ahead; i >= 0; --i)
        cout << ans[i];

    return 0;
}