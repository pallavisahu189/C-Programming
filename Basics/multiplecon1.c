// Take positive integer input and tell if it
//is a three digit number or not.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    if(n>99 && n<1000) {
        printf("It is a three digit number");
    }
    else{
        printf("It is not a three digit number");
    }
 
    return 0;
}