#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, ans = 0;
    string s, t;
    cin >> n >> s;
    int tem = 0, changed = 1;

    while((tem=s.find("VK", tem))!= string::npos)   // 判断有几个正常的 VK
    {               
        tem++;
        ans++;
    }

    if((s.find("VVV") != string::npos || s.find("KKK") != string::npos) && changed) 
    {                                               // VVV 或 KKK 可修改
        ans++;
        changed--;
    }

    if(s == "VV" || s[n-2] == 'V' && s[n-1] == 'V' && changed)
    {                                               // 特判等于 VV 或尾 VV
        ans++;
        changed--;
    }
    
    if(s == "KK" || s.find("KK") == 0 && changed)   // 特判等于 KK 或头 KK
        ans++;
    
    cout << ans;
    return 0;
}