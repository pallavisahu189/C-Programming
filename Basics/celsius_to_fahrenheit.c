//Write a program convert Fahrenheit to Celsius.

#include <stdio.h>

int main() {
    float n;
    printf("Enter Fahrenheit: ");
    scanf("%f",&n);
    
    float celsius = ((n-32)*5)/9;
    printf("Temperature in Celsius is: %f",celsius);  
  
    return 0;
}

