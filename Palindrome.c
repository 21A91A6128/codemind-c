#include<stdio.h>  
int main()    
{    
int n,r,s=0,t;    
scanf("%d",&n);    
t=n;    
while(n>0)
{    
r=n%10;    
s=(s*10)+r;    
n=n/10;    
}    
if(t==s)    
printf("True");    
else    
printf("False");   
return 0;  
}   