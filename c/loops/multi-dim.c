#include<stdio.h>

void main(){
    int matrix1[2][3] = {
        {
            1,2,3
        },
        {
            4,5,6
        }
    };

    int matrix2[2][3] = {
        {
            11,22,33
        },
        {
            44,55,66
        }
    };



    int len_row = sizeof(matrix1)/sizeof(matrix1[0]);
    int len_col = sizeof(matrix1[0])/sizeof(matrix1[0][0]);
    // printf("total row: %d\n", len_row);
    // printf("Total col: %d\n", len_col);

    // access elemnet from the multi dim array
    // printf("%d\n", matrix1[0][1]);
    // printf("%d\n", matrix2[1][2]);

    // matrix1:
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }

    // matrix2:
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }

    // matrix-1 + matrix-2:
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix1[row][col] + matrix2[row][col]);
        }
        printf("\n");
    }

    // matrix-1 * matrix-2:
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix1[row][col] * matrix2[row][col]);
        }
        printf("\n");
    }
}
