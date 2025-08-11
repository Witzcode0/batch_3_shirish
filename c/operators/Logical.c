#include<stdio.h>

void main(){
    // Logical operators: And (&&), Or (||), Not (!)
    // c1 c2 c3 && ||
    // T  T  T  T  T
    // T  F  F  F  T
    // F  T  F  F  T
    // F  F  T  F  T
    // F  F  F  F  F

    // A !
    // T !T = False
    // F !F = True

    int c1 = 0; // false
    int c2 = 1; // true
    int c3 = 20 < 30; // true
    int c4 = 30 < 20; // false

    // printf("%d", c1 && c2); // 0 - false
    // printf("%d", c1 || c2); // 1 - true
    // printf("%d", c1 || c2 && c3 || c4);
    // c1 || t || c4
    // t || c4
    // t = 1
    printf("%d\n", !c1); // 1- true
    printf("%d\n", !c2); // 0- false
}
