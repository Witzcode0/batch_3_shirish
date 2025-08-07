#include<stdio.h>

void main(){
    int num1 = 10, num2 = 5;

    int result = num1 + num2;
    float div = num1 / num2;

    printf("Add: %d\n", result);
    printf("Sub: %d\n", num1-num2);
    printf("Mul: %d\n", num1*num2);
    printf("Div: %f\n", div);
    printf("mod: %d\n", num1%num2);
}
