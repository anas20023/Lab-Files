#include<stdio.h>

int main(){

    int x,y,sum,dif,mod,product;
    printf("Enter number X:");
    scanf("%d",&x);
    printf("Enter number Y:");
    scanf("%d",&y);
    sum=x+y;
    dif=x-y;
    mod=x / y;
    product= x * y;

    printf("Sum is: %d\n",sum);
    printf("Difference is: %d\n",dif);
    printf("Product is: %d\n",product);
    printf("Quotient is: %d\n",mod);





return 0;
}
