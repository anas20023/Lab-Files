#include<stdio.h>
int main(){

    int a,b;
    printf("Enter A:");
    scanf("%d" , &a);

    printf("Enter B:");
    scanf("%d" , &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("New Variable A is:%d\n",a);
    printf("New Variable B is:%d\n",b);




return 0;
}
