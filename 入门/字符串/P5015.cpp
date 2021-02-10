#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char n[100] = {0};
    gets(n);
    int ans = strlen(n);

    for (int i = 0; i < 6; i++)
        if (n[i] == ' ' || n[i] == '\n')
            ans--;
    
    cout << ans;
    return 0;
}