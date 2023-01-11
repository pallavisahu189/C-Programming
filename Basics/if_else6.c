// Given the length and breadth of a rectangle,
// write a program to find whether the area of the
// rectangle is greater than its perimeter.

#include <stdio.h>

int main() {
    int l;
    printf("Enter length: ");
    scanf("%d",&l);
    
    int b;
    printf("Enter breadth: ");
    scanf("%d",&b);
    
    int a = l*b;
    printf("area: %d",a);
    
    int p = 2*(l+b);
    printf("\nperimeter: %d",p);
    
    if(a>p) {
        printf("\narea greater than perimett");
    }
    else{
        printf("\narea is less than perimetter");
    }
 
    return 0;
}