// enter element number:1 4
// enter element number:2 5
// enter element number:3 8
// enter element number:4 9
// enter element number:5 6
// 8

#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        printf("\nenter element number:%d ",i+1);
       scanf("%d",&arr[i]);
    }
    printf("%d",arr[2]);
    
    return 0;
}