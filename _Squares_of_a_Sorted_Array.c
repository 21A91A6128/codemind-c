#include<stdio.h>
void bs(int *v,int r)
{
	int j,k,l;
	for(k=0;k<r;k++)
	{
		for(j=k+1;j<r;j++)
		{
			if((v[k])>(v[j]))
			{
				l=v[k];
				v[k]=v[j];
				v[j]=l;
			}
		}
	}
}
int main()
{
	int r,v[2004],k;
	scanf("%d",&r);
	for(k=0;k<r;k++)
	{
		scanf("%d",&v[k]);
	}
	for(k=0;k<r;k++)
	{
	    v[k]=v[k]*v[k];
	}
	bs(v,r);
	for(k=0;k<r;k++)
	{
		printf("%d ",v[k]);
	}
	return 0;
}