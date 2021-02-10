#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ans, temp = 0;
    cin >> ans;
    for (int i = 1; i <= ans * ans; i++)
    {
        if (i < 10)
            cout << '0';
        cout << i;
        if (i % ans == 0)
            cout << endl;
    }

    cout << endl;

    for (int i = 1; temp < ans;)
    {
        temp++;
        for (int x = 0; x < ans - temp; x++)
            cout << "  ";
        for (int j = 0; j < temp; j++)
        {
            if (i < 10)
                cout << '0';
            cout << i++;
        }
        cout << endl;
    }
    return 0;
}