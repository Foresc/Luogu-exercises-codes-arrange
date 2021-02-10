#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num = 0;
    cin >> num;
    int ar[num] = {0};

    for (int i = 0; i < num; i++)
        cin >> ar[i];
    
    for (int j = 0; j < num; j++)
    {
        int cnt = 0;
        for (int k = 0; k < j; k++)
            if (ar[j] > ar[k])
                cnt++;
        cout << cnt << ' ';
    }

    return 0;
}