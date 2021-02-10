#include <stdio.h>

int main()
{
    int year = 0, month = 0, isRN = 0, a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d", &year, &month);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        isRN = 1;
    if(isRN == 1 && month == 2)
        printf("29");
    else
        printf("%d", a[month - 1]);
    return 0;
}
