#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l = 0, m = 0;
    cin >> l >> m;
    int road[l + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        int rt = 0, rw = 0;
        cin >> rt >> rw;
        for (int j = rt; j <= rw; j++)
        {
            road[j] = 1;
        }
    }
    int ans = 0;
    for (int k = 0; k < l + 1; k++)
    {
        if (!road[k])
            ans++;
    }
    cout << ans;
    return 0;
}