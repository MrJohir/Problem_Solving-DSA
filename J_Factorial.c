#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int fac=0;
    for(int i=1; i<=n; i++){
        fac =i*fac;
    }
    printf("%d", fac);
}