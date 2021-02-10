/*
 * @FileName: P1518.cpp
 * @Author: Foresc
 * @Date: 2021/02/08 21:13:34
 */

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct point
{ //坐标
    int x;
    int y;
    int dec = 1; //行进方向 1为北，顺时针90°递推
};

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
bool id[160010] = {false}; //特征值，确认不是死循环
char map[12][12];

void move(struct point *p) //移动
{
    if (map[p->x + dx[p->dec % 4]][p->y + dy[p->dec % 4]] == '*')
        p->dec++;
    else
    {
        p->x += dx[p->dec % 4];
        p->y += dy[p->dec % 4];
    }
}

int main()
{
    struct point f, c;
    struct point *fp = &f, *cp = &c;
    int ans = 0;
    memset(map, '*', sizeof(map));
    for (int i = 1; i <= 10; ++i)
    {
        string in;
        getline(cin, in);
        for (int j = 0; j < 10; ++j)
        {
            if (in[j] == 'C')
            {
                c.x = i;
                c.y = j + 1;
            }
            if (in[j] == 'F')
            {
                f.x = i;
                f.y = j + 1;
            }
            map[i][j + 1] = in[j];
        }
    }

    while (1)
    {
        ans++;
        move(fp);
        move(cp);
        if (f.x == c.x && f.y == c.y)
            break;
        if (id[f.x + f.y * 10 + c.x * 100 + c.y * 1000 + (f.dec % 4) * 10000 + (c.dec % 4) * 40000])
        {
            ans = 0;
            break;
        }
        id[f.x + f.y * 10 + c.x * 100 + c.y * 1000 + (f.dec % 4) * 10000 + (c.dec % 4) * 40000] = true;
    }

    cout << ans;
    return 0;
}