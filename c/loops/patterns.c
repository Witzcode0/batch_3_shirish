#include<stdio.h>

void main(){

    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *



    int num = 5;

    for (int row = 1; row <= num; row++){
        for (int col = 1; col <= row-1; col++){
            printf("  ", row);
        }
        for (int col = 1; col <= num-row+1; col++){
            printf("* ", row);
        }
        printf("\n");
    }
}
