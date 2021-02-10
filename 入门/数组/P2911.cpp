#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int s1 = 0, s2 = 0, s3 = 0, ans = 0;
    cin >> s1 >> s2 >> s3;
    vector<int> a(s1 + s2 + s3 + 1, 0);
    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++)
                a[i + k + j]++;
    ans = 3;
    for (int l = 3; l <= s1 + s2 + s3; l++)
    {
        if (a[ans] < a[l])
            ans = l;
    }
    cout << ans;
    return 0;
}