#include <iostream>

using namespace std;

int main(void)
{
    int total, i, ans;
    cin >> total;
    for (i = 1;; i++)
    {
        int temp = total;
        temp -= 1092 * i;
        if (temp % 364 == 0)
        {
            ans = temp / 364;
            if (ans > 100)
                continue;
            break;
        }
    }
    cout << ans << endl
         << i;
    return 0;
}