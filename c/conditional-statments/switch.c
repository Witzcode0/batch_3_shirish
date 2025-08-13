#include<stdio.h>

void main(){

    // syntax:

    // switch(expression){
        // case 1:
            // block of code 1
            // break;
        // case 2:
            // block of code 2
            // break;
        // ...
        // default:{
            // defalut code of block;
        // }
    // }

    // day [0,1,2,3,4,5,6]
    int day = 31;

    switch(day){
        case 0:
            printf("Sun");
            break;
        case 1:
            printf("Mon");
            break;
        case 2:
            printf("Tus");
            break;
        case 3:
            printf("Wed");
            break;
        case 4:
            printf("Thu");
            break;
        case 5:
            printf("Fri");
            break;
        case 6:
            printf("Sut");
            break;
        default:
            printf("Invalid day!!!");

    }

}
