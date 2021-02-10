#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char ans = 0;
    int n = 0;
    cin >> n;
    cin.get();                  // 去除换行符
    while (cin >> ans)
    {
        for (int i = 0; i < n; i++)
            if (ans + 1 > 122)
                ans = 97;
            else
                ans++;
        cout << ans;
    }

    return 0;
}