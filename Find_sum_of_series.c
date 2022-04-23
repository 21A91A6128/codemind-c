#include<stdio.h>
int main()
{
    int n;
    float r,v,k=0;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        r=1/v;
        k+=r;
    }
    printf("%.2f",k);
    return 0;
}