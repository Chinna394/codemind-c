#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,min,m=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    for(int i=min;;i--)
    {
        if((a%i==0) && (b%i==0))
        {
            m=i;
            break;
            
        }
    }
    printf("%d",m);
}