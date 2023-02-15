
#include <stdio.h>

int main(){
    int a = 5;
    int* x = &a;  // changed a ki value
    *x = 25;
    printf("%d\n",a);  
    return 0;
}    
        