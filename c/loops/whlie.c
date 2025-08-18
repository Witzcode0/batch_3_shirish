#include<stdio.h>

void main(){
    //printf("brijesh\n");
    //printf("brijesh\n");
    //printf("brijesh\n");
    //printf("brijesh\n");
    //printf("brijesh\n");
    //printf("brijesh\n");


    //syntax : while
    // always use for infinite
    // while(condition){
       // code block
    // }

    // int start = 1, end = 10;
    // infinite
    // while(start <= end){
       // printf("brijesh\n");
    // }

    // finite
    // while(start <= end){
       //  printf("%d - Briehs\n", start);
       // start++;
    //}

    // table

    // int table = 89;
    // while(start <= end){
       // printf("%d * %d = %d\n", table, start,table*start);
        // start++;
    // }

    int age;
    float weight;

    while(1){
        printf("Enter your age: ");
        scanf("%d", &age);

        if(age >= 18){
            printf("Enter your weight: ");
            scanf("%f", &weight);
            if(weight >= 50){
                printf("You can donate.\n");
            }else{
                printf("You can not donate : due to weight issue.\n");
            }
        }else{
            printf("You can not donate : due to age issue.\n");
        }
    }






}
