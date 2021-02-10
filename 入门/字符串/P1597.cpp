#include <bits/stdc++.h>

using namespace std;

void isv(int* ans, int num, char in)
{
    switch(in)
    {
        case 'a':
            ans[num] = ans[0];
            break;
        case 'b':
            ans[num] = ans[1];
            break;
        case 'c':
            ans[num] = ans[2];
            break;
    }
}

int getn(char ch, int* ans, char in)
{
    if(ch == 'a')
    {
        if(in > 96 && in < 100)
            isv(ans, 0, in);
        else
            ans[0] = in - 48;
    }
    else if(ch == 'b')
    {
        if(in > 96 && in < 100)
            isv(ans, 1, in);
        else
            ans[1] = in - 48;
    }
    else
    {
        if(in > 96 && in < 100)
            isv(ans, 2, in);
        else
            ans[2] = in - 48;
    }
}

int main(void)
{
    string in;
    cin >> in;
    int ans[3] = {0};
    for(int i=0; i<in.length();)
    {
        getn(in[i], ans, in[i+3]);
        i += 5;
    }
    for(int i=0; i<3; i++)
        cout << ans[i] << ' ';
    return 0;
}