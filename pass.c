#include<stdio.h>
int main()
{

    int marks;
    printf("Enter Your Math Marks:");
    scanf("%d", &marks);

    if(marks <33)
    {
        printf("You Failed!!!!\n");
    }
    else if(marks >= 33 && marks<60)
    {
        printf("You Obtained C Grade\n");
    }
    else if(marks >= 60 && marks <70)
    {
        printf("You Obtained B Grade\n");
    }
    else if(marks >= 70 && marks<80)
    {
        printf("You Obtained A Grade\n");
    }
    else if(marks >= 80 && marks<=100)
    {
        printf("You Obtained A+\n");
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}
