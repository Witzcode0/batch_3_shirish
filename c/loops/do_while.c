#include<stdio.h>

void main(){
    // syntax: do-while

    //do{
        //code of block
    //}while(condtion);

     int start = 1, end = 10, table = 3;

     do{
        printf("%d * %d = %d\n", table, start,table*start);
        start++;
     }while(start<=end);
}
