#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d1,d2;
    scanf("%d %d", &a,&b);
    c=a%(int)pow(10,b);
    d1=(int)log10(a)+1;
    d2=a/(int)pow(10,d1-b);
    printf("%d",abs(c-d2));
    
    
}