//Ques : WAP to print odd numbers from 1 to
//100.

#include <stdio.h>

int main() {
    for(int i=1; i<=100; i++){
     if(i%2!=0){   // odd number
     continue;
     }
     printf("%d\t",i);
    }

    return 0;
}