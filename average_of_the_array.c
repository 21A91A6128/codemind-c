#include<stdio.h>
int main()
{
	int v[2004],k,l,n;
	float r;
	scanf("%d",&l);	
	for(k=0;k<l;k++)
	{
		scanf("%d",&v[k]);
	}
	for(k=0;k<l;k++)
	{
	    n=n+v[k];
	}
	r=n/l;
	printf("%0.2f",r);
	return 0;
}