#include<stdio.h>
int main()
{
    int v[2004],r,l=0,k;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        if(v[k]%2!=0)
        {
            l++;
        }
    }
    if(l<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}