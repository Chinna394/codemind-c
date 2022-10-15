#include<stdio.h>
int main()
{
    int n,r,a=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(a<r)
        {
          a=r;  
        }
        n=n/10;
    }
    printf("%d",a);
}