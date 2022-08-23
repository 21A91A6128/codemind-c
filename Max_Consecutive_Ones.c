#include<stdio.h>
int main()
{
    int n,v[2004],k,a=0,b=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
        if(v[k]==1)
        {
            a++;
        }
        else
        {
            if(a>b)
            {
                b=a;
            }
            a=0;
        }
    }
    if(a>b)
    {
        b=a;
    }
    printf("%d",b);
}