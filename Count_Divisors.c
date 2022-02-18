#include<stdio.h>
int main()
{
    int v,k,l,i,m=0;
    scanf("%d %d %d",&v,&k,&l);
    for(i=v;i<=k;i++)
    {
        if(i%l==0)
        {
            m++;
        }
    }
    printf("%d",m);
    return 0;
}