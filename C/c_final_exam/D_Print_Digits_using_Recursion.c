// Solution with digit using recursion
#include <stdio.h>

void DigitRecursion(int n)
{
 if(n == 0)
    {
        return;
    }
    DigitRecursion(n / 10);
    int last_digit=n%10;
    printf("%d ", last_digit);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        if(n==0)
        {
            printf("0");
        }
        DigitRecursion(n);
        printf("\n");
    }
    return 0;
}

// Solution with digit
// #include<stdio.h>
// int main(){
//     int t;
//     scanf("%d", &t);
//     for(int i=1; i<=t; i++)
//     {
//         int n;
//         scanf("%d",&n);
//         int digit[11];
//         int count=0;

//         if(n==0)
//         {
//             printf("0");
//         }
//         while (n>0)
//         {
//             digit[count]=n%10;
//             count++;
//             n /=10;
//         }
//         for(int j=count-1; j>=0; j--)
//         {
//             printf("%d ", digit[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//---------------------------------

// Solution with string using recursion

// void StringRecursion(char str[], int i)
// {

//     if (str[i] == '\0')
//     {
//         return;
//     }
//     printf("%c", str[i]);

//     if (str[i + 1] != '\0')
//     {
//         printf(" ");
//     }
//     StringRecursion(str, i + 1);
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         char str[20];
//         scanf("%s", &str);
//         StringRecursion(str, 0);
//         printf("\n");
//     }
// }

//----------------------------------------------

// Solution with String

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         char str[20]; // contains 10^9
//         scanf("%s", &str);
//         for (int i = 0; str[i] != '\0'; i++)
//         {
//             printf("%c", str[i]);

//             if(str[i+1]!='\0')
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }