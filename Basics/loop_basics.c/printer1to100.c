//print 1 to 100

#include <stdio.h>
int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=100; i=i+1){
        printf("%d\n",i);
    }
    
return 0;
}