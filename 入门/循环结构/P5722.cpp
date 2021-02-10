#include <iostream>

using namespace std;

int main(void)
{
    int ans = 0, k;
    cin >> k;
    for (int i = 1; i <= k; i++)
        ans += i;
    cout << ans;
    return 0;
}