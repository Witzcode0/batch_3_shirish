#include<stdio.h>

void main(){
    int num = 10;
    int increment_num = num++; // 10
    printf("num++ : %d\n", increment_num); // 11
    printf("++num : %d\n", ++num); // 12

    int decrement_num = num--; // 10
    printf("num-- : %d\n", decrement_num); // 11
    printf("--num : %d\n", --num); // 12
}
