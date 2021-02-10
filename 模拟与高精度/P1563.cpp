#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n = 0, m = 0, loc = 0, lr = 0, time = 0;
    cin >> n >> m;
    int dec[n];
    string name[n];

    for (int i = 0; i < n; ++i)     // 读取玩具
    {
        cin >> dec[i] >> name[i];
    }

    m++;
    while (--m)
    {
        cin >> lr >> time;
        if (!(lr ^ dec[loc]))       // 利用 ^ 运算相同为 0，不同为 1
            if (loc - time >= 0)    // 本题方向和左右值相同时向左，不同向右
                loc -= time;
            else
                loc = n - time + loc;
        else
            if (loc + time < n)
                loc += time;
            else
                loc = time - n + loc;
    }

    cout << name[loc];
    return 0;
}