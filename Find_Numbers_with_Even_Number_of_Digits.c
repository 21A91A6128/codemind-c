#include<stdio.h>
int main()
{
    int n,v[2004],k,r,s=0,l=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
        while(v[k]>0)
        {
            r=v[k]%10;
            s++;
            v[k]=v[k]/10;
        }
        if(s%2==0)
        {
            l++;
        }
        s=0;
    }
    printf("%d",l);
    return 0;
}