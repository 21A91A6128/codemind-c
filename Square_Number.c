#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((i*i)==n)
        {
            k++;
        }
    }
    if(k==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}