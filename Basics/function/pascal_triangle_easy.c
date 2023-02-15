//pascal triangle
    1
    11
    121
    1331
    14641
    15101051 //

#include <stdio.h>
int main(){
    int n;
    printf("Enter a n:");
    scanf("%d",&n);
    
    for(int i=0; i<=n; i++){
        int first = 1;
        
        for(int j=0; j<=i; j++){
            printf("%d",first);
            first = first*(i-j)/(j+1);  //ic(j+1)
        }
        printf("\n");
    }
    return 0;
}    
        