// Take float input and print the fractional part of the real number.


#include <stdio.h>
int main(){

float x;
printf("Enter Decimal Number: ");
scanf("%f",&x);

int y = x;
printf("%d",y);

float z = x-y;
printf("%f",z);


return 0;
}