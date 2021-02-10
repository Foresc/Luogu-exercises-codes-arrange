#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int b[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    // 字母对应按键次数
    int ans = 0;
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
            ans++;
        if(s[i] >= 'a' && s[i] <= 'z')
            ans += b[s[i] - 97];
    }
    cout << ans;
    return 0;
}