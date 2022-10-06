#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i=i+2)
    {
        printf("%d",n);
        printf(" ");
        printf("x");
        printf(" ");
        printf("%d",i);
        printf(" ");
        printf("=");
        printf(" ");
        printf("%d
",n*i);
    }
}