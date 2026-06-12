#include<stdio.h>

// int Count_Vowel(char s[], int length, int count){

//     if(length==)
// }
int main(){
    char s[202];
    fgets(s, sizeof(s), stdin);
    int length = strlen(s);
    int count=0;
    // int vowel = Count_Vowel(s,length,1);
     for(int i=0; i<length; i++){
        if(s[i]== 'a' || s[i]=='A')
        {
            count++;
        }
        if(s[i]== 'e' || s[i]=='E')
        {
            count++;
        }
        if(s[i]== 'i' || s[i]=='I')
        {
            count++;
        }
        if(s[i]== 'o' || s[i]=='O')
        {
            count++;
        }
        if(s[i]== 'u' || s[i]=='U')
        {
            count++;
        }
    }
   
    printf("%d", count);
}
