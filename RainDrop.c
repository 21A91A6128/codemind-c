#include<stdio.h>
int main()
{
    int v;
    scanf("%d",&v);
    if(v%3==0 || v%5==0 || v%7==0)
    {
        if(v%3==0)
        {
            printf("Pling");
        }
        if(v%5==0)
        {
            printf("Plang");
        }
        if(v%7==0)
        {
            printf("Plong");
        }
    }
    else
    {
        printf("%d",v);
    }
}