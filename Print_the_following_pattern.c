#include<stdio.h>
int main()
{
    int n,v,k;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=v;k<=n;k++)
        {
            printf("%d ",k);
        }
        printf("
");
    }
    return 0;
}