/*
 * @FileName: P1786.cpp
 * @Author: Foresc
 * @Date: 2021/02/09 22:36:23
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

struct s{
    char name[31];      //姓名
    string career;      //职业
    int banggong;       //帮贡
    int level;          //等级
    int careerlevel;    //职业等级，对应职业数组
    int high;           //输入顺序
};

string ce[5] = {"HuFa", "ZhangLao", "TangZhu", "JingYing", "BangZhong"};

bool firstcamp(struct s &a, struct s &b)     //第一次比较函数，先比较帮贡后等级
{   
    if(a.banggong == b.banggong)
        return a.high < b.high;
    else
        return a.banggong > b.banggong;
}

bool secondcamp(struct s &a, struct s &b)
{
    if(a.careerlevel == b.careerlevel)
        if(a.level == b.level)
            return a.high < b.high;
        else
            return a.level > b.level;
    else
        return a.careerlevel < b.careerlevel;
}

int main()
{
    int n, tem = 0;
    cin >> n;
    n -= 3;
    int cen[5] = {2, 4, 7, 25, 110};
    struct s first[3];
    struct s last[n];

    for(int i=0; i<3; ++i)
    {
        cin >> first[i].name >> first[i].career >> first[i].banggong >> first[i].level;
        first[i].high = i;
    }

    for(int i=0; i<n; ++i)
    {
       cin >> last[i].name >> last[i].career >> last[i].banggong >> last[i].level;
       last[i].high = i + 3;
    }
    
    sort(last, last + n, firstcamp);

    for(int i=0; i<n; ++i)
    {
        if(cen[tem] == 0)
            tem++;
        last[i].careerlevel = tem;
        last[i].career = ce[tem];
        cen[tem]--;
    }

    sort(last, last + n, secondcamp);     

    for(int i=0; i<3; ++i)
        cout << first[i].name << " " <<  first[i].career << " " << first[i].level << endl;

    for(int i=0; i<n; ++i)
        cout << last[i].name << " " << last[i].career << " " << last[i].level << endl;

    system("pause");
    return 0;
}