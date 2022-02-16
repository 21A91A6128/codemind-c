#include<stdio.h>
int main()
{
    int n,v,k=0,l;
    scanf("%d",&n);
    l=n*n;
    while(l)
    {
        v=l%10;
        k+=v;
        l=l/10;
    }
    if(k==n)
    {
        printf("Neon Number");
    }
    else
    {
    printf("Not Neon Number");
    }
    return 0;
}