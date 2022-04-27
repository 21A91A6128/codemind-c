#include<stdio.h>
int main()
{
    int v[2004],n,k,j,l=0,m=0;
    scanf("%d",&n);
    for (k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
   for(k=0;k<n;k++)
   {
       for(j=k+1;j<n;j++)
       {
           if(v[k]!=v[j])
           {
               l++;
           }
       }
       if(l!=0 && v[k]%2!=0)
       {
           m++;
       }
   }
   printf("%d",m);
    return 0;
}