#include<stdio.h>
int main()
{
    int v,k,l;
    scanf("%d %d %d",&v,&k,&l);
    if(v>50 && k>60 && l>100)
    {
        printf("10");
    }
    else if(v>50 && k>60 && l<100)
    {
        printf("9");
    }
    else if(v<50 && k>60 && l>100)
    {
        printf("8");
    }
    else if(v>50 && k<60 && l>100)
    {
        printf("7");
    }
    else if(v>50 || k>60 || l>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
    return 0;
}