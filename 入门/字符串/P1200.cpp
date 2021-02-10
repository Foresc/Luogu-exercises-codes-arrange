#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string table = "aABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string unit, comet;
    cin >> comet;
    cin >> unit;
    int csum = 1, usum = 1;

    for(int i=0; i<comet.length(); i++)
    {
        int n = table.find(comet[i]);
        csum *= n;
    }

    for(int i=0; i<unit.length(); i++)
    {
        int n = table.find(unit[i]);
        usum *= n;
    }

    if(csum % 47 == usum % 47)
        cout << "GO";
    else
        cout << "STAY";

    return 0;
}