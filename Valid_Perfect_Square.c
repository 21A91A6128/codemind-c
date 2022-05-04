#include<stdio.h>
int vps(int num)
{
    int j,c=0;
    for(j=1;j<=num;j++)
    {
        if(num==j*j)
        {
            c++;
            break;
        }
    }
    if(c!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int v[2004],k,r,n;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
        if(vps(v[k])==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}
