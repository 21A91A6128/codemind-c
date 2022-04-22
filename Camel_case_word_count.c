#include<stdio.h>
#include<string.h>
int main()
{
    char v[2004];
    int k,r=0;
    scanf("%[^
]s",v);
    for(k=1;k<strlen(v)-1;k++)
    {
        if(v[k]>64 && v[k]<91)
        {
            r++;
        }
    }
    printf("%d",r+1);
    return 0;
}