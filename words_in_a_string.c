#include<stdio.h>
#include<string.h>
int main()
{
    char v[2004];
    int k,r=0;
    scanf("%[^
]s",v);
    for(k=0;v[k]!=NULL;k++)
    {
        if(v[k]==' ')
        {
            r++;
        }
    }
    printf("%d",r+1);
    return 0;
}