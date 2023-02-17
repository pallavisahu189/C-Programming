// Enter a number: 5
// Good Morning
// Good Morning
// Good Morning
// Good Morning
// Good Morning

#include <stdio.h>
void greeting(int n){
        if(n==0)return;
        printf("Good Morning\n");
        greeting(n-1);
    return n;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    greeting(n);
    return 0;   
}
   