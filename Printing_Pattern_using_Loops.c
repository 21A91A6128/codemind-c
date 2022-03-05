#include<stdio.h>
int main()
{
    int n,l,v,k,m;
    scanf("%d",&n);
    l=2*n-1;
    for(v=0;v<l;v++)
    {
        for(k=0;k<l;k++)
        {
            m=(v>k)?k:v;
            m=(m>l-v-1)?l-v-1:m;
            m=(m>l-k-1)?l-k-1:m;
            printf("%d ",n-m);
        }
        printf("
");
    }
    return 0;
}