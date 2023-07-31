#include<stdio.h>

int main()
{

    int n;

    printf("Enter a number for checking:");
    scanf("%d", &n);

    if(n==0)
    {
        printf("Your  Given Value is 0\n");
    }
    else if(n>0)
    {
        printf("Your Given Value is Positive\n");
    }else if(n<0)
    {
        printf("Your Given Value is Negative\n");
    } else{
            printf("Invalid Input");
    }


}
