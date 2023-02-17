// print sum from 1 to n (return type)

#include <stdio.h>
int add(int n){
        if(n==1 || n==0)return 1;   
        int sumAns = n+add(n-1);
        return sumAns;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = add(n);
    printf("%d", sum);
    return 0;   
}