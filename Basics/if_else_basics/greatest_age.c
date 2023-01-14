// If the ages of Ram, Shyam and Ajay are input
// through the keyboard, write a program to
// determine the youngest of the three.

#include <stdio.h>

int main() {
    int Ram, Shyam, Ajay;
    printf("Enter age of Ram: ");
    scanf("%d",&Ram);
    
    printf("Enter age of Shyam: ");
    scanf("%d",&Shyam);
    
    printf("Enter age of Ajay: ");
    scanf("%d",&Ajay);
    
    if(Ram>Shyam && Ram>Ajay){
        printf("%d greater age in group",Ram);
    }
    
    if(Shyam>Ram && Shyam>Ajay){
        printf("%d greater age in group",Shyam);
    }

    if(Ajay>Ram && Ajay>Shyam){
        printf("%d greater age in group",Ajay);
    }
    return 0;
}