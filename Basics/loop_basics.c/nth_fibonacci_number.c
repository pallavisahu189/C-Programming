//print the nth fibonacci number.

#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    
    int a=1;
    int b=1;
    int sum =0;
    
    for(int i=1; i<=n; i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The factorial of %d is: %d\n",n,sum);
    return 0;
}