#include<stdio.h>
int main()
{
    int v[2004],k,r,l,d,n=0;
    scanf("%d %d",&l,&d);
    for(r=0;r<l;r++)
    {
        scanf("%d",&v[r]);
    }
    for(r=0;r<l;r++)
    {
        if(v[r]%d==0)
        {
            n++;
        }
    }
    printf("%d",n);
}