// Take 3 numbers input and tell if they
// can be the sides of a triangle.

#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Enter a 1st side: ");
    scanf("%d",&a);
    
    printf("Enter a 2nd side: ");
    scanf("%d",&b);
    
    printf("Enter a 3rd side: ");
    scanf("%d",&c);
    
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    
     return 0;
    }
