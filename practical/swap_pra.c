// swap two number

#include <stdio.h>
 int swap(int a, int b){
     int temp;
        temp = a;
        a = b;
        b = temp;
    printf("The value of a %d\n",a);
    printf("The value of b %d",b);
        
 }   
int main(){
    int a;
    printf("Enter a 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter a 2nd number: ");
    scanf("%d",&b);
    swap(a,b);
   
    return 0;
    }