#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char a[5][31] = {"XXX..XXXXXXXX.XXXXXXXXXXXXXXXX", // 数表
                     "X.X..X..X..XX.XX..X....XX.XX.X",
                     "X.X..XXXXXXXXXXXXXXXX..XXXXXXX",
                     "X.X..XX....X..X..XX.X..XX.X..X",
                     "XXX..XXXXXXX..XXXXXXX..XXXXXXX"};
    int n = 0, x = 0, y = 0, tn = 0;
    cin >> n;
    tn = n;
    char ans[5][n * 4];
    memset(ans, 0, sizeof(ans));        // 将数组全部初始化为 0
    cin.get();                          // 丢弃第一行换行符
    while (tn--)
    {
        scanf("%1d", &y);               // 以字符形式获取要输出的每个数字
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 5; j++)
                ans[j][x * 4 + i] = a[j][y * 3 + i];
        for (int k = 0; k < 5; k++)
            ans[k][x * 4 + 3] = '.';
        x++;
    }

    for (int l = 0; l < 5; l++)
    {
        for (int m = 0; m < n * 4 - 1; m++)
            cout << ans[l][m];
        cout << endl;
    }
    return 0;
}