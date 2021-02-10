#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string a[26] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "a", "both", "another", "first", "second", "third"};
    int m[26] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 0, 21, 44, 69, 96, 25, 56, 89, 24, 61, 0, 1, 4, 1, 1, 4, 9};
    // 打表大法好
    int n = 0, num[6] = {0};

    for (int i = 0; i < 6; i++)
    {
        string in;
        cin >> in;

        for (int j = 0; j < 26; j++)        // 判断每个词是不是数字
            if (in == a[j])
            {
                num[n++] = m[j];            // 是的话把 m 里面对应的值存进去，已经做平方取余
                break;
            }
    }

    if (n == 0)
        cout << 0 << endl;
    else
    {
        sort(num, num + 6);                 // 排序，最小数一定是从小到大
        int isf = 0;

        for (int k = 0; k < 6; k++)
        {
            if (num[k])
            {
                if (isf && num[k] < 10)     // 如果是一位数且不是整个数第一位，加 0
                    cout << 0;

                cout << num[k];
                isf = 1;
            }
        }
    }

    return 0;
}