// multiplication of two number - taken by user

#include <stdio.h>

int main() {
    
    float x;
    printf("enter x value :  ");
    scanf("%f",&x);
    
    float y;
    printf("\n enter y value :  ");
    scanf("%f",&y);
    
    float XY = x*y;
    printf("\n multiplication of x and y : %f",XY);
    return 0;
}