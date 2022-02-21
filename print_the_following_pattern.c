#include<stdio.h>
int main()
{
    int n,v,k;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=n;k++)
        {
            if(k==1||v==n||k==v)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}