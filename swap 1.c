#include<stdio.h>

int main(){

     int a,b,temp;

     a=10;
     b=5;
     temp=a;  /// Using third Variable
     a=b;
     b=temp;

     printf("New A %d\n" , a);
     printf("New B %d\n" ,b);
     printf("Inside Temp %d\n" ,temp);

return 0;
}
