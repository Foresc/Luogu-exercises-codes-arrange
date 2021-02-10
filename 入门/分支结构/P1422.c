#include <stdio.h>

int main()
{
    int degree = 0;
    scanf("%d", &degree);
    if(degree <= 150)
        printf("%0.1f", degree*0.4463);
    else if(degree > 150 && degree <= 400)
        printf("%0.1f", 150*0.4463 + (degree - 150)*0.4663);
    else 
        printf("%0.1f", 150*0.4463 + 250*0.4663 + (degree - 400)*0.5663);
    return 0;
}