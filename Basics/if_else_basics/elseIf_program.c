// Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three
// points fall on one straight line.

#include <stdio.h>

int main() {
    double x1;
    printf("Enter x1: ");
    scanf("%d",&x1);
    
    double x2;
    printf("Enter x2: ");
    scanf("\n%d",&x2);
    
    double x3;
    printf("Enter x3: ");
    scanf("\n%d",&x3);
    
    double y1;
    printf("Enter y1: ");
    scanf("\n%d",&y1);
    
    double y2;
    printf("Enter y2: ");
    scanf("\n%d",&y2);
    
    double y3;
    printf("Enter y3: ");
    scanf("\n%d",&y3);
    
    double m1 = (y2-y1)/(x2-x1);
    
    double m2 = (y3-y2)/(x3-x2);
    
    if(m1=m2) {
        printf("its point is straight line");
    }
    else{
        printf("its point is not a straight line");
    }

    return 0;
}