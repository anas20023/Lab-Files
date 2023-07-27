#include <stdio.h>

int main()
{
    int choice;
    float d1, d2, radius, length, width, base, height;

    printf("Enter the length of Rhombus's 1st diagonal: ");
    scanf("%f", &d1);
    printf("Enter the length of Rhombus's 2nd diagonal: ");
    scanf("%f", &d2);
    printf("Area of the Rhombus: %f\n\n\n", (d1 * d2) / 2);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the Circle: %f\n\n\n", 3.1416 * radius * radius);

    printf("Enter the length of the One Side of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the Other Side of rectangle: ");
    scanf("%f", &width);
    printf("Area of the Rectangle: %f\n\n\n", length * width);

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    printf("Area of the Triangle: %f\n", 0.5 * base * height);

    return 0;
}
