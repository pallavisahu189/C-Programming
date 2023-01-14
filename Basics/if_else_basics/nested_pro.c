//Take 3 positive integers input and print
//the greatest of them. 

#include <stdio.h>

int main() {
    
    int x;
    printf("Enter a 1st number: ");
    scanf("%d",&x);
    
    int y;
    printf("Enter a 2nd number: ");
    scanf("%d",&y);
    
    int z;
    printf("Enter a 3rd number: ");
    scanf("%d",&z);
    
    if(x>y){
        if(x>z){
        printf("%d The number is greatest",x);
        }
        else{
        printf("%d The number is greatest",z);
    }
    }
    
    if(y>x){
        if(y>z){
        printf("%d The number is greatest",y);
        }
        else{
            printf("%d The number is greatest",z);
        }
    }
    
     return 0;
    }