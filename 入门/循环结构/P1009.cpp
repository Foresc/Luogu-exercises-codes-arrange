#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a[100] = {0}, b[100] = {1}, c[100] = {0}, ans[100] = {0};
    int n = 0, len_a = 0, len_b = 1, len_c = 1, len_ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        len_a = 0;
        int p = i;
        while (p > 0) // 将每一个 i 放入 a 数组
        {
            a[len_a++] = p % 10;
            p /= 10;
        }
        for (int x = 0; x < len_a; x++)     // 高精乘
            for (int y = 0; y < len_b; y++) // b 为 [i-1] 的阶乘
                c[x + y] += a[x] * b[y];

        for (int z = 0; z < len_c; z++) // 判断每一位是否要进位
            if (c[z] > 9)
            {
                c[z + 1] += c[z] / 10;
                c[z] %= 10;
            }

        if (c[len_c]) // 判断是否最高位进位
            len_c++;

        len_b = len_c;
        len_ans = max(len_ans, len_c);

        for (int j = 0; j < len_c; j++) // 把结果给 b ,作为下一次的 i-1
            b[j] = c[j];

        memset(c, 0, sizeof(c));

        for (int k = 0; k < len_ans; k++) // 累加 ans
        {
            ans[k] += b[k];
            if (ans[k] > 9)
            {
                ans[k + 1] += ans[k] / 10;
                ans[k] %= 10;
            }
        }

        len_c = len_ans + len_a; // 计算下一次 c 数组的长度
    }

    while (!ans[len_ans])
        len_ans--;
    for (int i = len_ans; i >= 0; i--)
        cout << ans[i];
    return 0;
}