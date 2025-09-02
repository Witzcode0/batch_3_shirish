#include <stdio.h>
#include <stdlib.h>

void main(){
    int *p =  (int *)malloc(20); //initialization

    for (int i = 0; i < 5; i++){

        int num;
        printf("Enter a num-%d", i);
        scanf("%d", &num);

        p[i] = num;

    }

    for (int i = 0; i < 5; i++){
        printf("%d\n", p[i]);
    }

}
