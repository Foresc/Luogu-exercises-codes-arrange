#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    int ans[15][15];
    memset(ans, 0, sizeof(ans));
    for (int i = 1, j = 0, x = 1; x <= n * n;)
    {
        while (j < n && !ans[i][j+1])       // 向右走
            ans[i][++j] = x++;
        while (i < n && !ans[i+1][j])       // 向下走
            ans[++i][j] = x++;
        while (j > 1 && !ans[i][j-1])       // 向左走
            ans[i][--j] = x++;
        while (i > 1 && !ans[i-1][j])       // 向上走
            ans[--i][j] = x++;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int l = 1; l <= n; l++)
            cout << setw(3) << ans[k][l];
        cout << endl;
    }
    return 0;
}