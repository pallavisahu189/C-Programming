// print n to 1
// Enter a number: 4
// 4
// 3
// 2
// 1

#include <stdio.h>
void decreasing(int n){
        if(n==0)return;
        printf("%d\n",n);
        decreasing(n-1);
    return n;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
   decreasing(n);
    return 0;   
}
   
