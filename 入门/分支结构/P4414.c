#include <stdio.h>

int main(void)
{
    int x[3];
    char a,b,c;
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    scanf("\n%c%c%c", &a, &b, &c);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2-i; j++)
            if(x[j] > x[j+1]){
                x[j] = x[j+1]^x[j];
                x[j+1] = x[j]^x[j+1];
                x[j] = x[j]^x[j+1];
            }
    }
    printf("%d %d %d", x[(int)(a-'A')], x[(int)(b-'A')], x[(int)(c-'A')]);
    return 0;
}