// print 1 to n
// Enter a number: 5
// 1
// 2
// 3
// 4
// 5

#include <stdio.h>
void increasing(int x, int n){
        if(x>n)return;
        printf("%d\n",x);
        increasing(x+1,n);
    return n;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;   
}