#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, t = 0, ans = 0;
    double a = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> t;
        for (int k = 0; k <= t; k++)
            ans ^= (int)(a * k);        // 对每一个数做异或运算
    }
    cout << (ans ^ 0);
    return 0;
}