// A pointer in C is a special type of variable that stores the memory address of another variable instead of storing the actual value directly.

// syntax : data_type *var_name; // define

// syntax: var_name = &another_variable; // initialization


// Example 1: pointer

#include <stdio.h>

void main() {
    int num1 = 20;
    int *ptr;
    
    ptr = &num1;
    printf("num1: %d\n", num1);
    printf("Memory address of num1 : %x\n", &num1);
    printf("pointer : %d", *ptr);
}

// Example 2: pointer to pointer

#include <stdio.h>

void main() {
    int num1 = 20;
    int *ptr;
    int **ptr2;
    
    ptr = &num1;
    
    ptr2=&ptr;
    
    printf("num1: %d\n", num1);
    printf("Memory address of num1 : %x\n", &num1);
    printf("pointer : %d\n", *ptr);
    printf("Pointer to pointer : %d", **ptr2);
}

// Example : pointer to function and arithmatic
#include <stdio.h>

int sum(int *num1, int *num2){
    return *num1 + *num2;
}

void main() {
    int n1=10, n2 =20;
    
    printf("function to pointer: %d", sum(&n1, &n2));
}

// Example : array to pointer

#include <stdio.h>


void main() {
    int marks[] = {67, 87, 89, 90, 96};
    int n = sizeof(marks) / sizeof(marks[0]);
    // printf("%d",n);
    
    int (*ptr)[n];
    
    ptr = &marks;

    int total = 0;
   for (int start = 0; start < n; start++){
    	printf("%d ", (*ptr)[start]);
    	total += (*ptr)[start];
   }
   printf("%d", total);
}