#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    string fn, sn;          // 我爱换行 win \r(0x0d)\n(0x0a)  linux \n(0x0d)
    int a[2002] = {0}, b[2002] = {0};

    getline(cin, fn);
    getline(cin, sn);

    if (fn[fn.size() - 1] == '\r')      // 检测 Linux 下的换行
        fn.pop_back();                  // Linux 下为 0x0d，不是默认值 0x0a        
                                        // 所以未被丢弃
    if (sn[sn.size() - 1] == '\r')
        sn.pop_back();

    int maxsize = fn.size() + sn.size();        // 算出最高位
    vector<int> ans(maxsize, 0);

    for (int i = 0; i < fn.size(); ++i)
        a[i] = fn[fn.size() - i - 1] - 48;

    for (int i = 0; i < sn.size(); ++i)
        b[i] = sn[sn.size() - i - 1] - 48;

    for (int i = 0; i < fn.size(); ++i)         // 高精乘核心
        for (int j = 0; j < sn.size(); ++j)
            ans[i + j] += a[i] * b[j];

    for (int i = 0; i < maxsize; ++i)           // 进位
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
            cout << 0;
        else
            continue;
    }
    return 0;
}