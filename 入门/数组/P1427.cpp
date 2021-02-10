#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ar[102] = {0}, cnt = 0;
    while (1)
    {
        cin >> ar[cnt];
        if (ar[cnt])
        {
            cnt++;
            continue;
        }
        else
            break;
    }
    for (int i = cnt-1; i >= 0; i--)
        cout << ar[i] << ' ';
    return 0;
}