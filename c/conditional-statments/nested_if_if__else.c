#include<stdio.h>

void main(){
    // syntax:
    // if (condition-1){
            // if(condition-2){
                // block of code
            // }else{
                //code of block
            // }
    // }....else{
        // code of block
    // }

    int score = 189;

    if (score <= 100 && score >= 0){
         if(score >= 80){
            printf("Class A");
        }else if(score >= 60){
            printf("Class B");
        }else if (score >= 40){
            printf("Class C");
        }else{
            printf("Sorry, you are failed");
        }
    }else{
        printf("Sorry, Invalid score.");
    }


}
