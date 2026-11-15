#include <stdio.h>

int main()
{
    float a, b, division;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    if (b != 0)
    {
        division = a / b;
        printf("Division = %.2f\n", division);
    }
    else
    {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
