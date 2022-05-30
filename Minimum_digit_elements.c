int dc(int v)
{
    int k=0;
    while(v)
    {
        v=v/10;
        k++;
    }
    return k;
}
#include<stdio.h>
int main()
{
    int r,v[2004],k,m=0,n=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    m=dc(v[0]);
    for(k=0;k<r;k++)
    {
        if(m>dc(v[k]))
        {
            m=dc(v[k]);
        }
    }
    for(k=0;k<r;k++)
    {
        if(m==dc(v[k]))
        {
            n++;
        }
    }
    printf("%d",n);
}