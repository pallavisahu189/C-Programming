//Print the table of ‘n’. Here ‘n’ is a integer
//which user will input.

#include <stdio.h>
int main() {
    int n;
    printf("Enter of number: ");
    scanf("%d",&n);
    for(int i=n; i<=(n*10); i=i+n){
        printf("%d\n",i);
    }
return 0;
}