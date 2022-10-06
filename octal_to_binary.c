#include<stdio.h>
#include<math.h>
void bin(int s){
    int r=0,v=0;
    char k[100];
    while(s>0){
        r=s%2;
        s=s/2;
        k[v]=char(r);
        v++;
    }
    for(int a=v-1;a>=0;a--){
        printf("%d",k[a]);
    }
}
int main(){
    int n,s=0,c=0,r=0;
    scanf("%d",&n);
    while(n){
        r=n%10;
        s+=r*pow(8,c);
        c++;
        n=n/10;
    }
    bin(s);
}