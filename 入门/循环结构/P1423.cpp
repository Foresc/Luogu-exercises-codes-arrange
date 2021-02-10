#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    double dt, sum, step = 2;
    int ans = 0;
    cin >> dt;
    while (dt > sum)
    {
        ans++;
        sum += step;
        step *= 0.98;
    }
    cout << ans;
    return 0;
}