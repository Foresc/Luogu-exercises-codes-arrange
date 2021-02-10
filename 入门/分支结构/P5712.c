#include <stdio.h>

int main()
{
    int applenum = 0;
    scanf("%d", &applenum);
    printf("Today, I ate %d apple", applenum);
    if(applenum > 1)
        printf("s");
    printf(".");
    return 0;  
}