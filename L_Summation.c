#include<stdio.h>

long long int summation(int n, int a[],int i)
{
    if(i==n)
    {
        return 0;
    }
    
   return a[i]+summation(n,a,i+1);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int sum = summation(n,a,0);
    printf("%lld",sum);
    return 0;
}