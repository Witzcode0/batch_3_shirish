// winneing = 45
// guessing = 67

// if wn == gn -> win
// if gn < wn -> too low
// if gn > wn -> too high
// guessing count
#include<stdio.h>

void main(){
    int winning_number = 45;
    int guessing_number;
    int flag = 1; // 1 - true
    int count = 1;

    while(flag){
        printf("Guess number: ");
        scanf("%d", &guessing_number);
        //printf("%d", guessing_number);

        if (guessing_number == winning_number){
            printf("Total number of guessing count is: %d \nCongrets!, You are win!!!\n", count);
            printf("\n\nPlay again? \nPRESS: \n0 for No\n1 for Yes");
            scanf("%d", &flag);
            if (flag){
                count = 1;
            }else{
                flag = 0;
                printf("See you next time!!!");
            }
        }else{
            if(guessing_number < winning_number){
                printf("Too low\n");
            }else{
                printf("Too High\n");
            }
            count += 1;
        }
    }
}
