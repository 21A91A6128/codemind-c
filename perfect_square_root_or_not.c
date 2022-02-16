#include <stdio.h>
#include <math.h>
int main()
{
int num,v;
float k;
scanf("%d",&num);
k=sqrt((double)num);
v=k;
if(v==k)
printf("True");
else
printf("False");
return 0;
}