// Take two integer input , a and b : a>b, and find the remainder when a is divided by b, and print the remaider.


#include <stdio.h>

int main() {
    int a, b;    //a>b
    printf("Enter Dividend: ");
    scanf("%d",&a);
    
    printf("Enter Divend: ");
    scanf("%d",&b);
    
    int q = a/b;
    int r = a-b*q;  //divisor*quotient+remainder=divident
    printf("The remaindernwhen %d is divided by %d is : %d\n", a,b,r);
    
    
    //OR
    
    int x, y;
    printf("Enter x value: ");
    scanf("%d",&x);
    
    printf("Enter y value: ");
    scanf("%d",&y);
    
    int R = x%y;
    printf("The remaindernwhen %d is divided by %d is : %d", x,y,R);
    
    

    return 0;
}