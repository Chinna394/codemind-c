#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float s,area;
scanf("%d%d%d", &a,&b,&c);
s=(float)(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%0.2f",area);
}