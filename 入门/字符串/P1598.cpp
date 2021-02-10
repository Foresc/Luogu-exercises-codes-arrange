#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string in;
    int ans[26] = {0};
    int max = 0;

    for (int i = 0; i < 4; ++i)
    {
        getline(cin, in);
        for (int k = 0; k < in.size(); ++k)
            if (in[k] >= 65 && in[k] <= 90)
                ++ans[in[k] - 65];
    }

    for (int i = 0; i < 26; ++i)
        if (max < ans[i])
            max = ans[i];

    for (int i = 0; i < max; ++i, cout << endl)
    {
        for (int k = 0; k < 26; ++k)
        {
            if (ans[k] == max - i)
            {
                --ans[k];
                cout << "*";
            }
            else
                cout << " ";
            if (k != 25)
                cout << " ";
        }
    }

    for (int i = 65; i < 90; ++i)
        cout << char(i) << " ";
    cout << "Z";

    return 0;
}