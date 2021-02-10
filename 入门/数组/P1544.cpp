#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int min = 0, max = 0;
    cin >> min >> max;
    vector<int> ans(10, 0);
    for (int i = min; i <= max; i++)
    {
        int t = i;
        while (t > 0)
        {
            ans[t % 10]++;      // 拆解每一个数，并存在 ans 数组对应位置
            t /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
        cout << ans[i] << " ";
    return 0;
}