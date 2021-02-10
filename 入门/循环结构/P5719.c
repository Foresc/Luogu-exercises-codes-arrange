#include <stdio.h>

int main(void)
{
    int acnt = 0, bcnt = 0, asum = 0, bsum = 0, n, k;
    double a_ans = 0, b_ans = 0;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        if (i % k)
        {
            bsum += i;
            bcnt++;
        }
        else
        {
            asum += i;
            acnt++;
        }
    }
    a_ans = 1.0 * asum / acnt;
    b_ans = 1.0 * bsum / bcnt;
    printf("%0.1lf %0.1lf", a_ans, b_ans);
    return 0;
}