#include<stdio.h>
#include<math.h>
bool isprime(int x)
{
    int count=0;
    if(x<2)
    {
        return false;
    }
    for(int i=2;i<=(int)sqrt(x);i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool ispall(int x)
{
    int r,rev=0,t=x;
    while(x>0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    if(t==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int n,d=0;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(isprime(i) && ispall(i))
        {
            d=i;
            break;
        }
    }
    printf("%d",d);
}