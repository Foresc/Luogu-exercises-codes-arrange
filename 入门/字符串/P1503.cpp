#include <bits/stdc++.h>

using namespace std;

long long int turn(string tnum)     // 数字很大，要用 LL
{
    long long int ret = 0, max = tnum.length();

    for (int i = 1; i <= max; i++)      // 字符串转数字
    {
        ret *= 10;
        ret += tnum[max - i] - '0';     
    }

    if (!(ret % 10) && ret)         // 删除反转后的末尾 0
        while (ret % 10 == 0)
            ret /= 10;

    return ret;
}

int main(void)
{
    string in;
    cin >> in;
    int n = 0;

    if ((n = in.find(".")) != string::npos)     // 小数，寻找小数点位置，赋值给 n
    {
        string t1 = in.substr(0, n);    // substr将下标 0 到下标 n-1 位置生成子串
        string t2 = in.substr(n + 1);
        cout << turn(t1) << '.' << turn(t2);
    }
    else if ((n = in.find("/")) != string::npos)    // 分数
    {
        string t1 = in.substr(0, n);
        string t2 = in.substr(n + 1);
        cout << turn(t1) << '/' << turn(t2);
    }
    else if ((n = in.find("%")) != string::npos)    // 百分数
    {
        string t1 = in.substr(0, n);
        cout << turn(t1) << '%';
    }
    else                                            // 正常情况
        cout << turn(in);

    return 0;
}