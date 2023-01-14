// Display this AP - 4,7,10,13,16.. upto ‘n’
// terms.with out maths. WITH OUT MATHS.

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a = 4;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}