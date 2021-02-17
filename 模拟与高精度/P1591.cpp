/*
 * @FileName: P1591.cpp
 * @Author: Foresc
 * @Date: 2021/02/13 22:44:36
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, head, ans;
    int num[5000] = {1};
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        fill(num, num + head + 1, 0);
        num[0] = 1;     //初始化数组
        head = 0;       //数值位数
        ans = 0;
        cin >> n >> a;
        for (int j = 2; j <= n; ++j)
        {
            for (int k = 0; k <= head; ++k)
                num[k] *= j;

            for (int k = 0; k <= head; ++k)
                if (num[k] > 9)
                {
                    if(k == head && num[head] > 9)  //计算数组位数
                        head++;
                    num[k + 1] += num[k] / 10;
                    num[k] %= 10;
                }
        }

        for (int j = 0; j <= head; ++j)
            if(num[j] == a)
                ans++;
        
        cout << ans << endl;
    }
    
    return 0;
}