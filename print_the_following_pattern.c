#include<stdio.h>
int main()
{
    int r,v,k;
    scanf("%d",&r);
    for(v=1;v<=r;v++)
    {
        for(k=1;k<=r;k++)
        {
            if(k==v||k==1||k==r)
            printf("* ");
            else
            printf("  ");
        }
        printf("
");
    }
}