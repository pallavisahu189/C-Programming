// enter a number: 4
// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7 

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i; j=j+2){
           printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
