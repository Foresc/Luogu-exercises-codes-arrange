#include <iostream>

using namespace std;

int main(void)
{
    int min, max, cnt, temp;
    cin >> cnt;
    cin >> temp;
    min = temp;
    max = temp;
    for (int i = 1; i < cnt; i++)
    {
        cin >> temp;
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }
    cout << max - min;
    return 0;
}