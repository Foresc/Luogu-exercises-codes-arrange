#include <stdio.h>

int main()
{
    int n = 0, ans = 10000000;
    scanf("%d", &n);
    for(int i = 0; i<3; i++) {
        int x = 0, y = 0, p = 0, t = 0;
        scanf("%d %d", &x, &y);
        while(t < n){
            t += x;
            p += y;
        }
        if(p < ans)
            ans = p;
    }
    printf("%d", ans);
    return 0;
}
