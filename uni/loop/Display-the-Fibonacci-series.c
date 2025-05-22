#include <stdio.h>

int main()
{
    int n;
    int a = 0, b = 1, next;

    // Get number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}