#include <iostream>

using namespace std;

int main(void)
{
    int ans = 0, k;
    cin >> k;
    int adder = 1, day = 0;
    for (int i = 0; i < k; i++)
    {
        ans += adder;
        day++;
        if (day % adder == 0)
        {
            day = 0;
            adder++;
        }
    }
    cout << ans;
    return 0;
}