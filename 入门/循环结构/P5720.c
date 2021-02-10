#include <stdio.h>

int main(void)
{
    int x, cnt = 1;
    scanf("%d", &x);
    while (x > 1)
    {
        x /= 2;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}