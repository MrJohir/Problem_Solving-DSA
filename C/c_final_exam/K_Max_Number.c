#include <stdio.h>
#include <limits.h>

int MaxNumber(int n, int a[],int i)
{
    if(i==n-1)
    {
        return a[i];
    }
    int max = MaxNumber(n,a,i+1);
    if(a[i]> max)
    {
        return a[i];
    }
    return max;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int result = MaxNumber(n,a,0);
    printf("%d", result);
}