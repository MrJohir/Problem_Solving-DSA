#include<stdio.h>

long long int Summation(int n, int a[], int i)
{
    if(i==n-1)
    {
        return a[i];
    }
    long long int sum = Summation(n,a,i+1);
    return sum+a[i];
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int result = Summation(n,a,0);
    printf("%lld",result);
}