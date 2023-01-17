// predict the output

#include <stdio.h>

int main() {
    int j;                     // veriable j mai koi value na ho to loop nhi chlta h its garbage value
    while(j<=10){    
     printf("%d",j);   
     j = j+1;
    }
    
    return 0;
}