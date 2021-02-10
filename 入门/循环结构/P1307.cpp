#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num = 0, isF = 0;
    cin >> num;
    if (num < 0)
    {
        isF = 1;
        num = abs(num);
    }
    int ans = 0;
    while (num != 0)
    {
        ans = ans * 10 + num % 10;
        num /= 10;
    }
    if (isF)
        cout << '-';
    cout << ans;
    return 0;
}