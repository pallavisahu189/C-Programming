// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss .also determine how much profit he made or loss he incurred.

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
    else{
        printf("Loss");
    }
 
    return 0;
}