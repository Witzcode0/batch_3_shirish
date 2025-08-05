#include<stdio.h>

void main(){
    // What is variable?
    // A variable in C is a named storage location in memory used to hold data that can be modified during program execution.

    // rules:
    // 1] variable must be unique
    // 2] only contains [a-z, A-Z, 0-9, _]
    // 3] you can not start with the digits
    // 4] special symbols are not allowed
    // 5] white space are not allowed
    // 6] keywords are not allowed
    // 7] variable are case-sensitive firstName, firstname

    // declare
    // syntax: data_type variable_name;

    // example:
    // int age;

    // initialize
    // syntax: data_type variable_name = value;
    // int year = 2025;

    // same value for diffrent variable
    // int num1 = 10, num2 = 10;
    // printf("num1: %d\n", num1);
    // printf("num2: %d", num2);

    // Update value of the variable
    // int num3 = 10;
    // printf("num3: %d\n", num3);
    // num3 = 30;
    // printf("num3: %d", num3);

    // diffrent data type of variables
    // float pi = 3.14;
    // int month = 6;

    // set static varaible
    // int num = 10;
    // printf("num : %d", num);

    // dynamic varible
    // int num1;
    // printf("Enter a num1: ");
    // scanf("%d", &num1);

    // printf("num1: %d", num1);

    // get multiple values from the console
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("num1: %d\nnum2: %d", num1, num2);
}
