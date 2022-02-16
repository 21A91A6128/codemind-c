#include<stdio.h>
int main()
{
    int N,i,v,k;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&v,&k);
        printf("%d
",v+k);
    }
    return 0;
}