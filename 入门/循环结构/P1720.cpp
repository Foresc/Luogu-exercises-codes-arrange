#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unsigned long long ans = 2, temp = 1;
    int n;
    cin >> n;
    if(n < 3)
        ans = 1;
    if(n == 0)
        ans = 0;
    for(int i = 0; i < n-3; i++){
        ans += temp;
        temp = ans - temp;
    }
    cout << ans << ".00";
    return 0;
}