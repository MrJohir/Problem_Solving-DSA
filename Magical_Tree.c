#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star=(n+10+1)/2;
    int space=star-1;
    for(int i=1; i<=space; i++)
    {
        printf(" ");
        for(int j=1; j<star; j++)
        {
            printf("*");
        }
        space--;
        star+=2;
        printf("\n");
    }
}