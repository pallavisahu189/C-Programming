#include <stdio.h>

int main(){
    int a = 5;
    int* x = &a;   // int* address ko store krta hai
    printf("%p\n",x);   
    printf("%p\n",&x);   
    return 0;
}    