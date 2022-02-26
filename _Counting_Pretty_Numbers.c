#include<stdio.h>
int main()
{
    int n,v,k,r,l=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&v,&k);
        for(j=v;j<=k;j++)
        {
            r=j%10;
            if(r==2 || r==3 || r==9)
            {
                l++;
            }
        }
        printf("%d
",l);
        l=0;
    }
    return 0;
}