#include<stdio.h>
int main(){
    int a[5][5];
    int position=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i][j]==1){
                printf("%d",abs(i-j));
                // if()
            }
        }
    }
}