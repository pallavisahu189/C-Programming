#include <stdio.h>
    int add (int a, int b){
        return a*b;
    }
int main() {
    int a;
    printf("Enter a 1st number:");
    scanf("%d",&a);
    int b;
    printf("Enter a 2nd number:");
    scanf("%d",&b);
    
    int multi = add(a,b);
    printf("multiplication of two number %d",multi);
    return 0;
}