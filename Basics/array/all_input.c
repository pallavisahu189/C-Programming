// enter element number:1 1
// enter element number:2 2
// enter element number:3 3
// enter element number:4 4
// enter element number:5 5
// 1 2 3 4 5 

#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        printf("\nenter element number:%d ",i+1);
       scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++)
    printf("%d ",arr[i]);
    return 0;
}