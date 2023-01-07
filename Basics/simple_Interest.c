// Calculation Simple Interest

#include <stdio.h>

int main() {
    
    float principal;
    printf("Enter the Principal : ");
    scanf("%f",&principal);
    
    
    float rate;
    printf("\nEnter the Rate : ");
    scanf("%f",&rate);
    
    float time;
    printf("\nEnter the Time : ");
    scanf("%f",&time);
    
    float si = principal*rate*time;
    printf("Simple Interest = %f",si);
    
     return 0;
}