#include <stdio.h>

long long int Factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int mul = Factorial(n - 1);
    return n * mul;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int result = Factorial(n);
    printf("%lld", result);
}