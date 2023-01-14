// 10 time repete hello word.

#include <stdio.h>
int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i=i+1){
        printf("Hello Word\n");
    }
    
return 0;
}