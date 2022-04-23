#include<stdio.h>
int main()
{
    int n,v,k,r;
    scanf("%d",&n);
    if(n>2)
    {
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=v;k++)
        {
            if(k==1||k==v||k<=v)
            {
                printf("*");
            }
        }
        printf("
");
    }
     for(v=n-1;v>=1;v--)
    {
        for(k=1;k<=v;k++)
        {
            if(k==1||k==v||k<=v)
            {
                printf("*");
            }
        }
        printf("
");
    }
    }
    else
    {
        printf("The pattern is not possible");
    }
    return 0;
}