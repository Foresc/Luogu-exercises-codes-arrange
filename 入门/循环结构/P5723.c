#include <stdio.h>
#include <math.h>

int main(void)
{
    int ans = 0, limit = 0, cnt = 2, sum = 0;
    scanf("%d", &limit);
    while (1)
    {
        int isZ = 1;
        if (cnt % 2 == 0 && cnt > 4)
        {
            cnt++;
            continue;
        }

        for (int i = 2; i <= sqrt(cnt); i++)
        {
            if (cnt % i == 0)
            {
                isZ = 0;
                break;
            }
        }

        if (isZ == 1)
        {
            if (sum + cnt > limit)
                break;
            printf("%d\n", cnt);
            sum += cnt;
            ans++;
        }
        cnt++;
    }
    printf("%d", ans);
    return 0;
}