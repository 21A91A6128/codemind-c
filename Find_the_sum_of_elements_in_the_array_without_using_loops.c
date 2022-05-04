#include<stdio.h>
int main()
{
    int v[2004],r,k,s=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
        s+=v[k];
    }
    printf("%d",s);
}