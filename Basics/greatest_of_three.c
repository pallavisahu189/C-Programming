// Ques : Take 3 positive integers input and print
// the greatest of them.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a 1st number: ");
    scanf("%d",&a);
    
    printf("Enter a 2nd number: ");
    scanf("%d",&b);
    
    printf("Enter a 3rd number: ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("%d is a greater",a);
    }
    
    if(b>a && b>c){
        printf("%d is a greater",b);
    }

    if(c>a && c>b){
        printf("%d is a greater",c);
    }
    return 0;
}