#include <stdio.h>

int main(void)
{
    int cnt, ans = 1001, temp;
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &temp);
        if (temp < ans)
            ans = temp;
    }
    printf("%d", ans);
    return 0;
}