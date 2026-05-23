#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;
    bool oparation = true;

    while (oparation == true)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
            }
            else
            {
                oparation = false;
                break;
            }
        }
        if (oparation == true)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d", count);
}