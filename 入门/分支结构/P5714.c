#include <stdio.h>

int main()
{
    int m;
    float h, ans;
    scanf("%d %f", &m, &h);
    ans = m/(h*h);
    if(ans < 18.5)
        printf("Underweight");
    else if(ans >= 24)
        printf("%0.3f\nOverweight", ans);
    else
        printf("Normal");   
    return 0;  
}