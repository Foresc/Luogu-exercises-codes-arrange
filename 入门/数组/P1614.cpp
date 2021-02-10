#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, m = 0, t = 0, u = 0, sum = 0, ans = 0;
    cin >> n >> m;
    vector<int> a(m, 0);
    for (int o = 0; o < m; o++)
    {
        cin >> a[o];
        ans += a[o];
    }
    for (int i = 0; i < n - m; i++)
    {
        cin >> u;
        a[t] = u;
        for (int k = 0; k < m; k++)     // 使用一个长 m 位的数组对比
            sum += a[k];                // 循环存数到数组每一位
        if (sum < ans)
            ans = sum;
        if (t == m - 1)
            t &= 0;
        else
            t++;
        sum &= 0;
    }
    cout << ans;
    return 0;
}