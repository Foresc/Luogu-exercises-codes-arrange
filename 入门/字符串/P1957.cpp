#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n = 0, tem1 = 0, tem2 = 0;
    char ch = 0;
    char* tp = NULL;
    char fans[5000] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (!scanf("%d", &tem1))        // 确认读取值
            tem1 = -1;

        if (tem1 == -1)                 // 选择输入模式
            scanf("%c %d %d", &ch, &tem1, &tem2);
        else
            scanf("%d", &tem2);

        switch (ch)
        {
            case 'a':                   // 加运算
            {
                int j = 0;
                char sans[20] = {0};
                j = sprintf(sans, "%d+%d=%d", tem1, tem2, tem1 + tem2);
                strcat(fans, sans);
                sprintf(sans, "\n%d\n", j);
                strcat(fans, sans);
                break;
            }
            case 'b':                   // 减运算
            {
                int j = 0;
                char sans[20] = {0};
                j = sprintf(sans, "%d-%d=%d", tem1, tem2, tem1 - tem2);
                strcat(fans, sans);
                sprintf(sans, "\n%d\n", j);
                strcat(fans, sans);
                break;
            }
            case 'c':                   // 乘运算
            {
                int j = 0;
                char sans[20] = {0};
                j = sprintf(sans, "%d*%d=%d", tem1, tem2, tem1 * tem2);
                strcat(fans, sans);
                sprintf(sans, "\n%d\n", j);
                strcat(fans, sans);
                break;
            }
        }
    }
    tp = fans;

    while(*tp != '\0')      // 结尾添加 \0
        tp++;
    *--tp = '\0';

    printf("%s", fans);
    return 0;
}