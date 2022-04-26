#include<stdio.h>
int main()
{
    int r,v[2004],k,j,m=1;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        for(j=0;j<r;j++)
        {
            if(k!=j)
            {
                m=m*v[j];
            }
        }
        printf("%d ",m);
        m=1;
    }
}