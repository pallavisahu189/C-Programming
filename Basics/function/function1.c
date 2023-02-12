#include<stdio.h>
void raipur(){
    printf("you are live Raipur\n");
    return;
}
void chhattisgarh(){
    printf("you are live Chhattisgarh\n");
    raipur();
    return;
}
void india(){
    printf("you are live India\n");
    chhattisgarh();
    return;
}

int main(){
    india();
    
    return 0;
}