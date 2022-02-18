#include<stdio.h>
int main()
{
    int n,v,k,l=1,i;
    scanf("%d %d %d",&n,&v,&k);
    for(i=1;i<=v;i++)
    {
        l=l*n;
    }
    printf("%d",l%k);
    return 0;
}