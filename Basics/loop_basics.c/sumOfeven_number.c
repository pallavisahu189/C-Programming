#include<stdio.h>
    int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int counter = 0,sum=0;

    do{
    if(counter % 2 == 0){
                sum += counter;
                }

    } while (counter <= 30);
    printf("Sum of even number:=%d", sum);
    
    return 0;
}