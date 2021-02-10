#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num, ans, temp;
    cin >> num;
    for (temp = 2; temp < sqrt(num); temp++)
    {
        if (num % temp == 0)
            ans = num / temp;
    }
    cout << ans;
    return 0;
}