#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long product = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("Product = %llu\n", product);
    return 0;
}