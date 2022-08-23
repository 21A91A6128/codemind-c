#include<stdio.h>
int pres(int *k,int r,int i)
{
    int v;
    for(v=0;v<i;v++)
    {
        if(k[v]==r)
        {
            return 0;
        }
    }
    return 1;
}
void sort(int *v,int r)
{
    int i,j,t;
    for(i=0;i<r-1;i++)
    {
    	for(j=0;j<r-1;j++)
    	{
        	if(v[j]>v[j+1])
        	{
            	t=v[j+1];
            	v[j+1]=v[j];
            	v[j]=t;
        	}
    	}
    }
}
int main()
{
    int n,V[2004],k,v[2004],i=1;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&V[k]);
    }
    v[0]=V[0];
    for(k=1;k<n;k++)
    {
        if(pres(v,V[k],i))
        {
            v[i]=V[k];
            i++;
        }
    }
    sort(v,i);
    if(n<3)
    {
        printf("%d",v[i-1]);
    }
    else
    {
        printf("%d",v[i-3]);
    }
}