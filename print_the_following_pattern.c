#include<stdio.h>
int main()
{
    int n,v,k;
    scanf("%d",&n);
    for(v=n;v>=1;v--)
    {
        for(k=v;k>=1;k--)
        {
            printf("%c ",v+64);
        }
        printf("
");
    }
    return 0;
}