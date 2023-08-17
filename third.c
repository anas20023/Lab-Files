#include<stdio.h>
int main(){

    int n;
    printf("Enter a Score of Exam:");
    scanf("%d",&n);

    if(n<60){
        printf("F\n");
    }
    else if(n>=60 && n<=64){
        printf("D\n");
    }
    else if(n>=65 && n<=69){
        printf("C\n");
    }
    else if(n>=70 && n<=74){
        printf("B\n");
    }
    else if(n>=75 && n<=79){
        printf("B+\n");
    }
    else if(n>=80 && n<=84){
        printf("A\n");
    }
    else if(n>=85 && n<=89){
        printf("A-\n");
    }
    else if(n>=90 && n<=100){
        printf("A+\n");
    }
    else{
        printf("Enter a Valid Number\n");
    }




 return 0;
}
