#include <stdio.h>
int main()
{
    int choice;

    printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Asalamualikum\n");
        break;
    case 2:
        printf("Aadaab\n");
        break;
    case 3:
        printf("Hello\n");
        break;
    default:
        printf("Incorrect Option\n");
        break;
    }

    return 0;
}
