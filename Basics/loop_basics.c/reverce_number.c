//WAP to print reverce of a given number.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        r=n/10;
    }
    printf("The reversed number is %d",r);
    return 0;
}