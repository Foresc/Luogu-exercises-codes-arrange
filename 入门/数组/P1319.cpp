#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, temp = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n * n;)
    {
        if (!temp)
            cin >> temp;
        while (temp--)
        {
            cout << ans;
            i++;
            if (!(i % n))
                cout << endl;
        }
        temp++;
        ans ^= 1;
    }
    return 0;
}