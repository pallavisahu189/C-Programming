#include <stdio.h>
    int add (int a, int b){
        return a+b;
    }
int main() {
    int a;
    printf("Enter a 1st number:");
    scanf("%d",&a);
    int b;
    printf("Enter a 2nd number:");
    scanf("%d",&b);
    
    int sum = add(a,b);
    printf("sum of two number %d",sum);
    return 0;
}