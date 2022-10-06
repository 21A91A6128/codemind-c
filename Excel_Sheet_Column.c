#include<stdio.h>
int main(){
    int v[2004],n,k=0;
    scanf("%d",&n);
    while(n>0){
        v[k++]=char(65+(n-1)%26);
        n=(n-1)/26;
    }
    for(k=k-1;k>=0;k--){
        printf("%c",v[k]);
    }
}