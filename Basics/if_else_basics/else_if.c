// If cost price and selling price of an item is
// input through the keyboard, write a program to
// determine whether the seller has made profit or
// incurred loss. Also determine how much profit he
// made or loss he incurred.

#include <stdio.h>

int main() {
     int cp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    
    int sp;
    printf("Enter selling price: ");
    scanf("%d",&sp);
    
    if(cp<sp) {
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No profit no loss");
    }

    return 0;
}