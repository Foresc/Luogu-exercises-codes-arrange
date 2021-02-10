#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    if(num*5 > num*3+11)
        printf("Luogu");
    else
        printf("Local");
    return 0;  
}