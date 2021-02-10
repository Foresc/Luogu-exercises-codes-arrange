#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int x = 0, y = 0;
    char tem = 0;
    int cntx[8] = {1, 0, -1, -1, -1, 0, 1, 1}, cnty[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    cin >> x >> y;
    int n[x][y];
    memset(n, 0, sizeof(n));

    for (int i = 0; i < x; i++)                 // 创建数组
    {
        for (int j = 0; j < y; j++)
        {
            cin >> tem;
            if (tem == '*')
            {
                n[i][j] = 9;
                for (int k = 0; k < 8; k++)
                    if (n[i + cntx[k]][j + cnty[k]] != 9 && i + cntx[k] >= 0 && i + cntx[k] < x && j + cnty[k] >= 0 && j + cnty[k] < y)
                        n[i + cntx[k]][j + cnty[k]]++;
            }
        }
    }

    for (int i = 0; i < x; i++, cout << endl)   // 输出
    {
        for (int j = 0; j < y; j++)
        {
            if (n[i][j] == 9)
                cout << '*';
            else
                cout << n[i][j];
        }
    }
    return 0;
}
