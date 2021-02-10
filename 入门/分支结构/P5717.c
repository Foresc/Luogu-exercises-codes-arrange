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
    if(a[0]+a[1]>a[2] && a[1]+a[2]>a[0] && a[0]+a[2]>a[1]) {
        if(a[2]*a[2] == a[1]*a[1] + a[0]*a[0])
            printf("Right triangle\n");
        if(a[2]*a[2] < a[1]*a[1] + a[0]*a[0])
            printf("Acute triangle\n");
        if(a[2]*a[2] > a[1]*a[1] + a[0]*a[0])
            printf("Obtuse triangle\n");
        if(a[2] == a[1] || a[1] == a[0] || a[2] == a[0])
            printf("Isosceles triangle\n");
        if(a[2] == a[1] && a[1] == a[0] && a[0] == a[2])
            printf("Equilateral triangle\n");
    } else
        printf("Not triangle");
    return 0;
}