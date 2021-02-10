#include <stdio.h>

int main()
{
    int x, n;
    long long int distance = 0;
    scanf("%d %d", &x, &n);
    for(int i=0; i<n; i++) {
        if((x%6) && (x%7))
            distance += 250;
        if(!(x%7))
            x = 1;
        else
            x++;
    }
    printf("%lld", distance);
    return 0;
}