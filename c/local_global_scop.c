#include<stdio.h>

void main(){
    int x= 10; // global scope
    
    void test(){
        printf("Global %d\n", x);
        int x = 20; // local scope
        printf("local %d\n", x);
    }
    test();
    printf("Global %d", x);
    
}