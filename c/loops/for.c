#include<stdio.h>

void main(){
    // syntax: for
    // alwasy use for limit
    // for(start; condition; inc/dec){
        // code of block
    // }

    int end=10, table=5;
    for(int start = 1; start <= end; start++){
        printf("%d * %d = %d\n", table, start,table*start);
    }
}
