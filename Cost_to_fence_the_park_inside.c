#include<stdio.h>
int main()
{
    int v,k,l,m,p;
    scanf("%d %d %d %d",&v,&k,&l,&m);
    if(v<=2*l||k<=2*l)
    {
        printf("Impossible");
    }
    else
    {
        p=v*k-((v-2*l)*(k-2*l));
        printf("%d",p*m);
    }
    return 0;
}