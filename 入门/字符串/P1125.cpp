#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ans[26] = {0}, maxn = 0, minn = 0, t = 0;
    char tem[101] = {0};
    cin.getline(tem, 100);
    for (int i = 0; tem[i] != '\0'; i++)        // 判断每个字母有多少个
        ans[(int)(tem[i] - 97)]++;

    for (int i = 0; i < 26; i++)                // 寻找第一个非0值
        if (ans[i])
        {
            maxn = ans[i];
            minn = ans[i];
        }

    for (int i = 1; i < 26; i++)                // 寻找最小最大值
    {
        if (ans[i] > maxn)
            maxn = ans[i];
        if (ans[i] < minn && ans[i])
            minn = ans[i];
    }

    t = maxn - minn;

    if (t < 2 || t % 2 == 0 && t != 2)          // 判断偶数和是否小于2
        cout << "No Answer" << endl << 0;
    else if (t == 2 || t == 3)                  // 判断2或者3
        cout << "Lucky Word" << endl << t;
    else
    {
        for (int i = 2; i < sqrt(t) + 1; i++)   // 判断其余质数
        {
            if (i > sqrt(t))
                cout << "Lucky Word" << endl << t;
            else if (t % i == 0 && t != 1)
            {
                cout << "No Answer" << endl << 0;
                break;
            }
        }
    }

    return 0;
}