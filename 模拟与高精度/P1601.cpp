#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{       
    string fn, sn;                // 我爱换行 win \r\n(0x0a)  linux \n(0x0d)

    getline(cin, fn);           
    getline(cin, sn);

    if (fn[fn.size() - 1] == '\r')      // 检测 Linux 下的换行
        fn.pop_back();                  // Linux 下为 0x0d，不是默认值 0x0a        
                                        // 所以未被丢弃
    if (sn[sn.size() - 1] == '\r')
        sn.pop_back();

    int maxsize = fn.size() > sn.size() ? fn.size() + 1 : sn.size() + 1;
    vector<int> ans(maxsize, 0);              // 判断最高位

    for (int i = 0; i < fn.size(); ++i)       // 读取第一个数
        ans[i] = fn[fn.size() - i - 1] - 48;

    for (int i = 0; i < sn.size(); ++i)       // 直接加上去了
        ans[i] += sn[sn.size() - i - 1] - 48;

    for (int i = 0; i < maxsize; ++i)         // 进位
    {
        if (ans[i] > 9)
        {
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
        }
    }

    for (int i = maxsize - 1, t = 0; i >= 0; --i)
    {
        if (ans[i])
            ++t;
        if (ans[i] || t)
            cout << ans[i];
        else if (i == 0 && t == 0)
            cout << '0';
        else
            continue;
    }
    return 0;
}