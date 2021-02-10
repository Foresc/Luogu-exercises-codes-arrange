#include <stdio.h>

int main()
{
    int a = 0,u = 0,b = 0,z = 0,num = 0,x = 1,y = 0;
    scanf("%d", &num);
    if(num & 1)
        x = 0;
    if(num > 4 && num <= 12)
        y = 1;
    if(x&y)
        a++;
    if(x|y)
        u++;
    if(x^y)
        b++;
    if(!(x|y))
        z++;
    printf("%d %d %d %d", a, u, b, z);
    return 0;
}