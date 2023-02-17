// print 1 to n 
// Enter a number: 4
// 1
// 2
// 3
// 4

#include <stdio.h>
void increasing(int n){
        if(n==0)return;   //base code
        increasing(n-1);   // call
        printf("%d\n",n);  // code
        return n;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    increasing(n);
    return 0;   
}
   
