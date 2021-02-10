#include <stdio.h>

int main()
{
    char a[13], t;
    int sum, tp = 1;
    for(int i = 0; i<13; i++)
        scanf("%c", &a[i]);
    for(int x = 0; x<11; x++) {
        if(a[x] != '-') {
            sum += ((int)a[x] - 48) * tp;    // 字符变数字
            tp++;
        }
        else
            continue;
    }
    if((sum % 11 == ((int)a[12] - 48)) || (sum % 11 == 10 && a[12] == 'X'))
        printf("Right");
    else {
        for(int i = 0; i<12; i++)
            printf("%c", a[i]);
        if(sum % 11 == 10)
            printf("X");
        else 
            printf("%d", sum % 11);
    }
    return 0;
}
