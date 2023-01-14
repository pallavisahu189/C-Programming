// Take  4 positive integers input and print greatest.

#include <stdio.h>

int main() {
    
    int a, b, c, d;
    printf("Enter a 1st number: ");
    scanf("%d",&a);
    
    printf("Enter a 2nd number: ");
    scanf("%d",&b);
    
    printf("Enter a 3rd number: ");
    scanf("%d",&c);
    
    printf("Enter a 4th number: ");
    scanf("%d",&d);
    
    if(a>b && a>c && a>d){
        printf("%d is a greater",a);
    }
    
    if(b>a && b>c && b>d){
        printf("%d is a greater",b);
    }

    if(c>a && c>b && c>d){
        printf("%d is a greater",c);
    }
    
    if(d>a && d>b && d>c){
        printf("%d is a greater",d);
    }
    return 0;
    }
