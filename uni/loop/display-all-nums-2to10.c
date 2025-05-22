#include <stdio.h> //(2x1=2, 2x2=4, ……., 10x10=100)

int main()
{
    // Loop through numbers 2 to 10
    for (int i = 2; i <= 10; i++)
    {
        printf("Table of %d:\n", i);

        // Inner loop for multiplication 1 to 10
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}