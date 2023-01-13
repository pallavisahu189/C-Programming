// number is aeven or odd

#include <stdio.h>
int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    n%2==0 ? printf("Its even number") : printf("Its odd number");

    return 0;
}