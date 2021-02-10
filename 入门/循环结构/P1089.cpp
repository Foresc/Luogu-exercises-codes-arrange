#include <iostream>

using namespace std;

int main(void)
{
    int total = 0, ans = 0, sum = 0, temp = 0, out = 0, i = 1;
    for (i = 1; i <= 12; i++)
    {
        cin >> out;
        total += 300;
        if (total - out < 0)
        {
            ans = -i;
            break;
        }
        if (total - out >= 100)
        {
            temp = ((total - out) / 100) * 100;
            total -= temp;
        }
        else
            temp = 0;
        sum += temp;
        total -= out;
    }
    if (ans == 0)
        ans = sum * 1.2 + total;
    cout << ans;
    return 0;
}