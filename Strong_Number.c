#include<stdio.h>
int main()
{
    int n,r,i,v,k=0,l;
    scanf("%d",&n);
    l=n;
    while(n>0)
    {
        r=n%10;
        v=1;
        for(i=r;i>=1;i--)
        {
            v=v*i;
        }
        k=k+v;
        n=n/10;
    }
    if(l==k)
    {
        printf("The number %d is a strong number",l);
    }
    else
    {
        printf("The number %d is not a strong number",l);
    }
    return 0;
}