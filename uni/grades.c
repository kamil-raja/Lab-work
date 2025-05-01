#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 69 && percentage < 80)
    {
        printf("Grade: C\n");
    }
    else if (percentage >= 0 && percentage < 50)
    {
        printf("Grade: F (Fail)\n");
    }
    else
    {
        printf("Invalid percentage entered.\n");
    }
    return 0;
}