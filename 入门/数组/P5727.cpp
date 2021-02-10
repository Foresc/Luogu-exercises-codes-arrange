#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<int> i = {0};
    int cnt = 0;
    cin >> i[cnt];
    while (i[cnt] != 1)
    {
        if (i[cnt] % 2)
            i[cnt + 1] = i[cnt] * 3 + 1;
        else
            i[cnt + 1] = i[cnt] / 2;
        cnt++;
    }

    do
    {
        cout << i[cnt] << ' ';
        cnt--;
    } while (cnt >= 0);

    return 0;
}