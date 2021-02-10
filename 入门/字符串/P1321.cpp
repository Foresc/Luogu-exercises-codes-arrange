#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string in;
    cin >> in;
    int b = 0, g = 0;

    for(int i=0; i<in.length(); i++)
    {
        if(in[i] == 'b' || in[i+1] == 'o' || in[i+2] == 'y')
            b++;
        if(in[i] == 'g' || in[i+1] == 'i' || in[i+2] == 'r' || in[i+3] == 'l')
            g++;
    }

    cout << b << endl << g;
    return 0;
}