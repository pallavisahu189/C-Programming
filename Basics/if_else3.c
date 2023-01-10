//* Any year is input through the keyboard write a program to determine whether the year is a leap year or not. (considering leap year occurs after every 4 year.)


#include <stdio.h>
int main() {
    
int year;
printf("Enter Year:");
scanf("%d",&year);

if(year%4==0){
    printf("This is leap year.");
}
    else{
        printf("This is not leap year");
    }
    return 0;
}