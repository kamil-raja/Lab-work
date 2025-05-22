#include <stdio.h> //Display the series (using loops): 1 2 3 4 5 .... n
int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}