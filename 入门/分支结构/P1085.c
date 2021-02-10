#include <stdio.h>

int main()
{
    int a = 0, b = 0, max = 0, date = 1;
    for(int i = 1; i<8; i++) {
        scanf("%d %d", &a, &b);
        if(a+b > max){
            max = a + b;
            date = i;
        }
    }
    printf("%d", date);
    return 0;
}
