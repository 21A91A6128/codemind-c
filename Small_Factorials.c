#include<stdio.h>
int main()
{
    int n,v,k=1,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d
",&v);
        for(j=v;j>0;j--)
        {
            k=k*j;
        }
        printf("%d
",k);
        k=1;
    }
    return 0;
}