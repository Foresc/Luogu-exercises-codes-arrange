#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    int ans[n][n];
    memset(ans, 0, sizeof(ans));
    **ans = 1;

    for (int i = 1, j = 0; i < n; i++)
    {
        ans[i][0] = 1;
        for (j = 1; j < i; j++)
            ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
        ans[i][j] = 1;
    }

    for (int i = 0; i < n; i++, cout << "\n")
        for (int j = 0; j <= i; j++, cout << " ")
            cout << ans[i][j];
    return 0;
}