//Take positive integer input and tell if it
//is divisible by 5 and 3.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    if(n%5==0 && n%3==0) {
        printf("this number is divisible by 5 and 3");
    }
    else{
        printf("this number is not divisible by 5 and 3");
    }
 
    return 0;
}