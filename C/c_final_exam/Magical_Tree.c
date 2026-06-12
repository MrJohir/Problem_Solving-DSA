#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int length = (n + 10 + 1) / 2;
    int space = length - 1;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int s = 1; s <= star; s++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }

    for(int i=1; i<=5; i++)
    {
        for(int s=1; s<=5; s++)
        {
        printf(" ");
        }
        for(int j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}