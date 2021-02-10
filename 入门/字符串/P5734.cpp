#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, q = 0;
    string ans, in;
    cin >> n;
    cin >> ans;
    
    while(n--)
    {
        cin >> q;
        if(q==1)                                 // 附加操作
        {
            cin >> in;
            ans += in;
            cout << ans;
        }
        else if(q==2)                           // 截取操作
        {
            int begin = 0, end = 0;
            cin >> begin >> end;
            string tin(ans, begin, end);
            ans = tin;
            cout << ans;
        }
        else if(q==3)                           // 插入操作
        {
            int index = 0;
            cin >> index >> in;
            ans.insert(index, in);
            cout << ans;
        }
        else if(q==4)                           // 查询操作
        {
            cin >> in;
            int t = ans.find(in);
            if(t == ans.npos)
                cout << -1;
            else
                cout << ans.find(in);
        }
        if(n)                                   // 不输出最后换行
            cout << endl;
        in.clear();
    }
    
    return 0;
}