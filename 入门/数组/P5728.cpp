#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, ans = 0;
    cin >> n;
    int a[n][3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (abs(a[j][0] - a[k][0]) <= 5 && abs(a[j][1] - a[k][1]) <= 5 && abs(a[j][2] - a[k][2]) <= 5 && abs((a[j][0] + a[j][1] + a[j][2]) - (a[k][0] + a[k][1] + a[k][2])) <= 10)
                ans++;
        }
    }
    cout << ans;
    return 0;
}