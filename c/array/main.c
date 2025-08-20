#include<stdio.h>

void main(){
    int stu_mark[7] = {67, 87, 98, 96, 58, 78, 99};

    // Access element of an array[indexing]
    // indexing start from 0
    // printf("%d\n", stu_mark[0]);
    // printf("%d\n", stu_mark[1]);
    // printf("%d\n", stu_mark[2]);
    // printf("%d\n", stu_mark[3]);
    // printf("%d\n", stu_mark[4]);
    // printf("%d\n", stu_mark[5]); // return 0
    // printf("%d\n", stu_mark[6]); // return 0

    int length = sizeof(stu_mark)/sizeof(stu_mark[0]);

    printf("Array length is: %d\n", length);

    // access array element using loop
    int total = 0;
    for (int start = 0; start<length; start++){
        printf("%d\n", stu_mark[start]);
        total += stu_mark[start];
    }
    printf("Total marks is: %d\n", total);
    printf("Avg marks is: %d\n",total/length);
    float percentage = ((float)total / (length * 100)) * 100;
    printf("Percentage is %.2f", percentage);
}
