/*
 * @FileName: P1065.cpp
 * @Author: Foresc
 * @Date: 2021/02/09 09:27:46
 */

#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int wt = m * n, ans = 0;        // 总操作次数
    int temp[wt][2];                // 机器号和对应时长
    int worklist[wt][4];            // 操作表，0为操作顺序，1为机器，2为时间，3为工序编号
    int workstep[n + 1] = {0};      // 每一个工件操作到第几步
    int tworkstep[m + 1] = {0};     // 存储正在进行的step
    int machinetime[m + 1];         // 机器剩下的运行时间
    bool iswork[wt] = {false};      // 每一号操作是否做完

    for (int i = 0; i < wt; ++i) // 存入操作
        cin >> worklist[i][0];

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < wt; ++j)
            cin >> temp[j][i];

    for (int i = 0; i < wt; ++i) // 构建操作表
    {
        int itemnum = (worklist[i][0] - 1) * m + workstep[worklist[i][0] - 1]++;
        worklist[i][1] = temp[itemnum][0];
        worklist[i][2] = temp[itemnum][1];
        worklist[i][3] = workstep[worklist[i][0] - 1];
    }

    fill(workstep, workstep + n + 1, 1);
    fill(machinetime, machinetime + m + 1, 0);

    while (1)
    {
        int cnt = 0;
        for(int i=1; i<=m; ++i)
        {
            if(machinetime[i] == 0)
            {
                workstep[tworkstep[i]]++;
                tworkstep[i] = 0;
                for(int j=0; j<wt; ++j)
                {
                    if(iswork[j] == false && worklist[j][1] == i && worklist[j][3] == workstep[worklist[j][0]])
                    {
                        machinetime[i] = worklist[j][2];
                        iswork[j] = true;
                        tworkstep[i] = worklist[j][0];
                        cout << "item" << worklist[j][0] << " machine" << i << " step" << workstep[worklist[j][0]] << " minute" << ans + 1 << " need " << machinetime[i] << " minute" << endl;     // 测试代码
                        break;
                    }
                    else
                        continue;
                }
            }
            cnt += machinetime[i];
        }

        for(int i=1; i<=m; ++i)
            if(machinetime[i])
                machinetime[i]--;

        if(cnt == 0)
            break;

        ans++;
    }

    cout << ans;
    return 0;
}