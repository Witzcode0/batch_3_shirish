#include<stdio.h>

void main(){
    // syntax:
    // if(condition){
        // block of code
    // }else{
        // block of code
    //}

    int balance = 2000;
    int withdrow = 5500;

    if(withdrow <= balance){
        printf("Remaing amount is: %d", balance-withdrow);
    }else{
        printf("Sorry, Insufficent balance");
    }
}
