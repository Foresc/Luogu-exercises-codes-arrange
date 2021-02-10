#include <stdio.h>

int main(void)
{
    int x, cnt = 0, temp = 1;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - cnt; j++)
        {
            if (temp < 10)
                printf("0");
            printf("%d", temp);
            temp++;
        }
        cnt++;
        printf("\n");
    }
    return 0;
}