#include<stdio.h>
void pn(int v,int k)
{
    if(k>v)
        return;
    printf("%d ",k);
    pn(v,++k);
}
int main()
{
    int v,k=1;
    scanf("%d",&v);
    if(v>=1 && v<=10000)
    {
        pn(v,k);
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
}