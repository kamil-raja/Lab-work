#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the number1: ");
    scanf("%d", &a);
    printf("Enter the number2: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    printf("After swapping: a = %d, b = %d\n", b, a);

    return 0;
}