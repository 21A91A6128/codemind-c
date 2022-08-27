#include<stdio.h>
void dup(int *a,int n)
{
    int k,j;
    for(k=0;k<n;k++)
    {
        for(j=0;j<n;j++)
        {
            if(a[k]==a[j] && k!=j)
            {
                a[k]=-1;
            }
        }
    }
}
int count(int *vk,int k,int n)
{
    int v,c=0;
    for(v=0;v<n;v++)
    {
        if(k==vk[v])
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,a[2004],k,v[2004],j=0,vk[2004],r=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
        vk[k]=a[k];
    }
    dup(a,n);
    k=0;
    for(j=0;j<n;j++)
    {
        if(a[j]!=-1)
        {
            v[k]=a[j];
            k++;
        }
    }
    for(j=0;j<k;j++)
    {
        r+=(count(vk,v[j],n))/2;
    }
    printf("%d",r);
}