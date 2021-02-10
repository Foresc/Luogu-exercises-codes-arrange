#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int cnt, tempo, tempt, tans = 1, ans = 0;
    cin >> cnt;
    cin >> tempo;
    for (int i = 1; i < cnt; i++)
    {
        cin >> tempt;
        if (tempo + 1 == tempt)
            tans++;
        else
            tans = 1;
        if (tans > ans)
            ans = tans;
        tempo = tempt;
    }
    cout << ans;
    return 0;
}