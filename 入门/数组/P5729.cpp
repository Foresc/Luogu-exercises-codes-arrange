#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int z = 0, y = 0, x = 0, q = 0;
    cin >> x >> y >> z;
    cin >> q;
    int t[x+1][y+1][z+1] = {0};
    memset(t, 0, sizeof(t));
    for (int i = 0; i < q; i++)
    {
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
        cin >> a >> b >> c; 
        cin >> d >> e >> f;
        for (int j = a; j <= d; j++)
            for (int k = b; k <= e; k++)
                for (int l = c; l <= f; l++)
                    t[j][k][l] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            for (int k = 1; k <= z; k++)
                if (!t[i][j][k])
                    ans++;
    cout << ans;
    return 0;
}