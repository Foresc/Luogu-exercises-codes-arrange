/*
 * @FileName: P1618.cpp
 * @Author: Foresc
 * @Date: 2021/03/03 13:34:02
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, sum;
    cin >> a >> b >> c;
    int max = (1000 / c) * a;

    for (int i = 123; i <= max; ++i)
    {
        int flag = 0;
        int n[10] = {0};
        
        int temp = i;
        while (temp > 0)
        {
            n[temp % 10]++;
            temp /= 10;
        }
        
        temp = (i / a) * b;
        while (temp > 0)
        {
            n[temp % 10]++;
            temp /= 10;
        }

        temp = (i / a) * c;
        while (temp > 0)
        {
            n[temp % 10]++;
            temp /= 10;
        }

        if(n[0])
            continue;

        for(int j=1; j<10; ++j)
            if(n[j] > 1)
                flag = 1;

        if(flag)
            continue;
        
        sum++;
        cout << i << ' ' << (i / a) * b << ' ' << (i / a) * c << endl;
    }

    if(!sum)
        cout << "No!!!";

    return 0;
}