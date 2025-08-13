#include<stdio.h>

void main(){
    // syntax:
    // if (condition-1){
        // code of block
    // } else if( condition-2){
        // code of block
    // } else if (condition-3) {
        // code of block
    // }....else{
        // code of block
    // }

    int score = 189;

    if(score >= 80){
        printf("Class A");
    }else if(score >= 60){
        printf("Class B");
    }else if (score >= 40){
        printf("Class C");
    }else{
        printf("Sorry, you are failed");
    }
}
