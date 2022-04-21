#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,k=0,v=0,l=0;
    scanf("%d",&n);
    k=n;
    while(n)
    {
        r=n%10;
        l++;
        n=n/10;
    }
    n=k;
    while(n)
    {
        r=n%10;
        v=v+pow(r,l);
        n=n/10;
        l--;
    }
    if(v==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}