#include<stdio.h>

void main(){
    // syntax:
    // if(condition){
        // block of code
    // }

    int balance = 2000;
    int withdrow = 2500;

    if (withdrow <= balance){
        printf("Remaing amount is: %d", balance-withdrow);
    }
}
