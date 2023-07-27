#include <stdio.h>
int main()
{

    float a;
    float b;
    printf("Enter 1st Number: ");
    scanf("%f", &a);
    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Sum is:\t\t\t%f\n", a + b);
    printf("Subtraction is:\t\t%f\n", a - b);
    printf("Multiplication is:\t%f\n", a * b);
    printf("Divition is:\t\t%f\n", a / b);

    return 0;
}