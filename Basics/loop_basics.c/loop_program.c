// print the sum of this series 
//1-2+3-4+5-6

#include <stdio.h>

int main() {
   int n;
   printf("Enter Number: ");
   scanf("%d",n);
   int sum=0;
   for(int i=1; i<=n; i++){
       if(i%2!=0){
          sum=sum+1;       //odd number hai to add
       }
       else{
           sum=sum-i;       // even number hai to subtract
       }
       printf("The sum is %d",sum);
   }

    return 0;
}