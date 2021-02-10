#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char n[62501] = {0};
    int i = 0, w = 0, l = 0;

    while (n[i - 1] != 'E')         // 读取输入
    {
        cin >> n[i];
        i++;
    }

    for (int j = 0; j < i; j++)     // 11分制判断
    {
        if (n[j] == 'W')
            w++;
        if (n[j] == 'L')
            l++;
        if ((w >= 11 && w - l >= 2) || (l >= 11 && l - w >= 2))
        {
            cout << w << ':' << l << endl;
            w = 0;
            l = 0;
        }
    }
    cout << w << ':' << l << endl << endl;
    w = 0, l = 0;

    for (int j = 0; j < i; j++)     // 21分制判断
    {
        if (n[j] == 'W')
            w++;
        if (n[j] == 'L')
            l++;
        if ((w >= 21 && w - l >= 2) || (l >= 21 && l - w >= 2))
        {
            cout << w << ':' << l << endl;
            w = 0;
            l = 0;
        }
    }
    cout << w << ':' << l;

    return 0;
}