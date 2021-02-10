#include <stdio.h>

int main()
{
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2-i; j++)
            if(a[j] > a[j+1]){
                a[j] = a[j+1]^a[j];
                a[j+1] = a[j]^a[j+1];
                a[j] = a[j]^a[j+1];
            }
    }

    int x = a[2], y = a[0];
     while(y>0) {
        int tmp = x % y;
        x = y;
        y = tmp;
    }
    if(x != 1)
        printf("%d/%d", a[0]/x, a[2]/x);
    else 
        printf("%d/%d", a[0], a[2]);
    return 0;
}