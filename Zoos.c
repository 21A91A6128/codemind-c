#include<stdio.h>
#include<string.h>
int main()
{
    char v[2004],k,a=0,b=0,l;
    fgets(v,2004,stdin);
    l=strlen(v);
    for(k=0;k<l;k++)
    {
        if(v[k]=='z')
        {
            a++;
        }
        else if(v[k]=='o')
        {
            b++;
        }
    }
    if(a*2==b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}