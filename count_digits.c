#include<stdio.h>
int main()
{
    int r,v[2004],k,m=0,n=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        n=0;
        do
        {
            v[k]=v[k]/10;
            n++;
        }
        while(v[k]);
        printf("%d ",n);
    }
}