#include <stdio.h>

int main()
{
    int a[10],height = 0;
    for(int i=0; i<10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &height);
    height += 30;
    int ans = 0;
    for(int x=0; x<10; x++) {
        if(height >= a[x])
            ans++;
    }
    printf("%d", ans);
    return 0;
}