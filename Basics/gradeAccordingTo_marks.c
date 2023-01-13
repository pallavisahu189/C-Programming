// Take input percentage of a student and
// print the Grade according to marks:
// 1) 90-100 Excellent
// 2) 80-90 Very Good
// 3) 70-80 Good
// 4) 60-70 Can do better
// 5) 50-60 Average
// 6) 40-50 Below Average
// 7) <40 Fail

#include <stdio.h>

int main() {
    int n;
    printf("Enter Marks: ");
    scanf("%d",&n);
    
    if(n>=91 && n<=100) {
        printf("Excellent");
    }
    else if(n>=81 && n<=90){
        printf("Very good");
    }
    else if(n>=71 && n<=80){
        printf("Good");
    }
    else if(n>=61 && n<=70){
        printf("Can do better");
    }
    else if(n>=51 && n<=60){
        printf("Average");
    }
    else if(n>=41 && n<=50){
        printf("Below average");
    }
    else{
        printf("fail");
    }

    return 0;
}