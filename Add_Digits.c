#include<stdio.h>
int main()
{
    int k=0,n,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        k=k+r;
        n=n/10;
        if(n==0 && k>9)
        {
            n=k;
            k=0;
        }
    }
    printf("%d",k);
    return 0;
}