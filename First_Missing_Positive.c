#include<stdio.h>
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
int main()
{
    int n,v[2004],r,k[2004],i=0;
    scanf("%d",&n);
    for(r=0;r<n;r++)
    {
        scanf("%d",&v[r]);
        if(v[r]>=0)
        {
            k[i]=v[r];
            i++;
        }
    }
    sort(k,i);
    for(r=1;r<k[i-1]+2;r++)
    {
        if(pres(k,r,i))
        {
            printf("%d",r);
            break;
        }
    }
}