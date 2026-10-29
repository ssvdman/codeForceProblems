#include <stdio.h>
 
int main(void)
{
    long long n;
    
    scanf("%lld", &n);
 
    if (n % 2 == 0) printf("%lld
", n / 2);
    else
    {
        n = (n + 1) / 2;
        printf("%lld
", -n);
    }
}