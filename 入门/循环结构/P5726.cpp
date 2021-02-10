#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, max, min, temp, sum = 0;
    double ans = 0;
    cin >> n >> temp;
    max = temp;
    min = temp;
    sum = temp;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
        sum += temp;
    }
    sum -= (max + min);
    ans = 1.0 * sum / (n - 2);
    cout << setprecision(3) << ans;
    return 0;
}