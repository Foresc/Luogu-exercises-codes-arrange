#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string w, in;
    int atime = 0, ftime = 0;
    cin >> w;
    transform(w.begin(), w.end(), w.begin(), ::tolower); // 转换所有字符为小写
    cin.ignore();                                        // 丢弃换行符
    getline(cin, in);
    transform(in.begin(), in.end(), in.begin(), ::tolower);
    w = ' ' + w + ' ';      // 在字符串的两边加空格，判断是否为单词而不是内部碰巧
    in = ' ' + in + ' ';    // 在两个字符串都要加，句子加为防止第一个就是该词

    if (in.find(w) == string::npos)
        cout << -1;
    else
    {
        ftime = in.find(w);
        string::size_type position = 0;
        while ((position = in.find(w, position)) != string::npos)
            atime++, position++;        // 寻找字符串，每次寻找完成指针 +1
        cout << atime << ' ' << ftime;
    }

    return 0;
}