#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<int> ans(8, 0);
    vector<int> c(7, 0);
    int n = 0;
    cin >> n;
    for (int i = 0; i < 7; i++)
        cin >> c[i];
    while (n--)
    {
        int tans = 0;
        vector<int> temp(7, 0);
        for (int j = 0; j < 7; j++) // 输入每张彩票
            cin >> temp[j];
        for (int k = 0; k < 7; k++) // 和大奖做比较
            for (int l = 0; l < 7; l++)
                if (c[k] == temp[l])
                {
                    tans++;
                    break;
                }
        ans[tans] += 1;
    }
    for (int m = 7; m >= 1; m--)
        cout << ans[m] << " ";
    return 0;
}