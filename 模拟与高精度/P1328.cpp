#include <iostream>
#include <algorithm>

using namespace std;

int main()
{                          // 写了个表判断输赢 1赢 -1输 0平
    int win[5][5] = {
        {0, -1, 1, 1, -1}, // 剪刀
        {1, 0, -1, 1, -1}, // 石头
        {-1, 1, 0, -1, 1}, // 布
        {-1, -1, 1, 0, 1}, // 蜥蜴人
        {1, 1, -1, -1, 0}  // 斯波克
    };

    int n, a, b, ansa = 0, ansb = 0;
    cin >> n >> a >> b;
    int na[a], nb[b];
    
    for(int i=0; i<a; ++i)
        cin >> na[i];
    
    for(int i=0; i<b; ++i)
        cin >> nb[i];

    for(int i=0; i<n; ++i)
    {
        if(win[na[i%a]][nb[i%b]] == 0)
            continue;
        if(win[na[i%a]][nb[i%b]] == 1)
            ansa++;
        else if(win[na[i%a]][nb[i%b]] == -1)
            ansb++;
    }

    cout << ansa << ' ' << ansb;
    return 0;
}