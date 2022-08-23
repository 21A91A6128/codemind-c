#include<stdio.h>
int main()
{
    int n1,n2,v[2004],k[2004],j,r,l=0;
    scanf("%d",&n1);
    for(j=0;j<n1;j++)
    {
        scanf("%d",&v[j]);
    }
    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    {
        scanf("%d",&k[j]);
    }
    scanf("%d",&r);
    for(j=0;j<n1;j++)
    {
        if(v[j]<=r && r<=k[j])
        {
            l+=1;
        }
    }
    printf("%d",l);
}