#include<stdio.h>
int main()
{
    float F,C;
    scanf("%f",&F);
    C=(float)((F-32)*5)/9;
    printf("%.2f",C);
}