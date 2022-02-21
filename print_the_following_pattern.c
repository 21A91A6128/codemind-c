#include<stdio.h>
int main()
{
    int n,v,k;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=n;k++)
        {
            if(v==k)
            {
                printf("0");
            }
            else
            {
                printf("x");
            }
        }
        printf("
");
    }
    return 0;
}