#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char ans[100];
    cin.getline(ans, 100);

    for (int i = 0; ans[i] != '\0'; i++)
    {
        if (ans[i] >= 97 && ans[i] <= 123)
            ans[i] -= 32;
    }

    for (int i = 0; ans[i] != '\0'; i++)
        cout << ans[i];

    return 0;
}