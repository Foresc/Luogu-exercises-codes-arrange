#include <stdio.h>

int main(void)
{
    int x, n;
    unsigned long long ans = 0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            if (temp % 10 == x)
                ans++;
            temp /= 10;
        }
    }
    printf("%lld", ans);
    return 0;
}