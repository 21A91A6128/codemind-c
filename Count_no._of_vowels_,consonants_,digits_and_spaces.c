#include<stdio.h>
int main()
{
    char str[2004],i;
    int j=0,a=0,b=0,c=0,d=0;
    fgets(str,sizeof(str),stdin);
    while(str[j]!=NULL)
    {
        i=str[j];
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
        {
            a++;
        }
        else if((i>='a'&& i<='z')||(i>='A'&&i<='Z'))
        {
            b++;
        }
        else if(i>='0' and i<='9')
        {
            c++;
        }
        else if(i==' ')
        {
            d++;
        }
        j++;
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",a,b,c,d);
}