// Covert Fahrenheit to Celsius:

#include <stdio.h>

int main() {
    float n;
    printf("Enter Celsius: ");
    scanf("%f",&n);
    
    float fahrenheit =  ((n*9)/5)+32;
    printf("Temperature in Fahrenheit is: %f",fahrenheit);  
  
    return 0;
}

