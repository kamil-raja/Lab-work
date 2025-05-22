#include <stdio.h> //Display the series:  2 4 16 256 65536 ....... (n terms)

int main()
{
    int n;
    unsigned long long term = 2; // long to handle large numbers

    // Get number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%llu ", term);
        term = term * term;

        return 0;
    }