#include <stdio.h> // Display the series:  2 4 8 16 32 64 128 ....... (n terms)

int main()
{
    int n, term = 2;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", term);
        term *= 2; // Each term is double the previous one
    }

    return 0;
}