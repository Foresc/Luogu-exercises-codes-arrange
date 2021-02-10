#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, ans = 0;
    cin >> n;
    vector<int> t(n, 0);    // 储存数据
    vector<int> s(n, 1);    // 储存是否已经被算
    for (int l = 0; l < n; l++)
        cin >> t[l];
    for (int i = 0; i < n - 1; i++)                                         // 从 1 到倒数第二个
        for (int j = i + 1; j < n; j++)                                     // 从 2 到倒数第一个
            for (int k = 0; k < n; k++)                                     // 和每个数进行判断
                if (t[i] + t[j] == t[k] && i != k && k != j && s[k])        // 每个数只能算一次 1+4 和 2+3 算一次
                {
                    s[k] = 0;
                    ans++;
                }
    cout << ans;
    return 0;
}