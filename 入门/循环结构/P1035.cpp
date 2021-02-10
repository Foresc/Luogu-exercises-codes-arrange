#include <iostream>

using namespace std;

int main(void)
{
    int ans = 0, k;
    double sum = 0;
    cin >> k;
    while (sum <= k)
    {
        ans++;
        sum += 1.0 / ans;
    }
    cout << ans << endl;
    return 0;
}