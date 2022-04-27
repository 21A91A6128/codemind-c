#include<stdio.h>
int main()
{
    int v[2004],k,r,l,n=0,a,b=0,c,t;
    scanf("%d",&l);
    for(r=0;r<l;r++)
    {
        scanf("%d",&v[r]);
    }
    for(r=0;r<l;r++)
    {
        while(v[r])
        {
            a=v[r]%10;
            b+=a;
            v[r]/=10;
        }
        n+=b;
        b=0;
    }
    printf("%d",n);
}