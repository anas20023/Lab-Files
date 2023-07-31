#include<stdio.h>
int main()
{

    int a,b;
    printf("Enter a Value of A:");
    scanf("%d", &a);

    printf("Enter a Value of B:");
    scanf("%d", &b);

    if(a>b)
    {
        printf("%d Is Larger Than %d\n", a,b);
    }
    else if(a==b)
    {
        printf("They  Are Equal\n");
    }
    else
    {
        printf("%d Is Smaller Than %d\n", a,b);
    }

    return 0 ;
}
