
#include <stdio.h>

int main(){
    int a = 5;
    int* x;  // int* address ko store krta hai
    x = &a;
    printf("%p\n",x);   
    printf("%p\n",&a);   
    return 0;
}    
        