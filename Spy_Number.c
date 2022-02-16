#include<stdio.h>
int main()
{
    int n,s=1,r,q,a=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s*r;
        a=a+r;
        n=n/10;
    }
    if(s==a)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}