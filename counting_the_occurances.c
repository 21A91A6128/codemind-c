#include<stdio.h>
int main()
{
    int k,s=0;
    char v[2004],r;
    scanf("%[^
]s",&v);
    scanf("%s",&r);
    for(k=0;v[k]!=NULL;k++)
    {
        if(v[k]==r)
        {
            s++;
        }
    }
    if(s>0)
    {
        printf("%d",s);
    }
    else
    {
        printf("-1");
    }
    return 0;
}