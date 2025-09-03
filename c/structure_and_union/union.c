// Purpose: To store one of several possible data types in the same memory location, which is useful for saving memory. 
// Memory: All members share the same memory space. 
// Size: The size of a union is determined by the size of its largest member. 
// Access: Only one member can be accessed at a time; assigning a value to one member can overwrite the values of other members. 
// Initialization: Only the first member of a union can be initialized at the time of declaration. 
// Use Cases: Best for situations where you need to store different types of data but only one at a time, such as in embedded systems with limited memory. 

Syntax:

union union_name{
    char c1;
    char c2;
    float num1;
}obj1, obj2;

// another way to define object

// union union_name obj1, obj2;

// Example:

#include<stdio.h>
#include<string.h>

// union book{
//     char name[100];
//     float price;
// }b1, b2;

union book{
    char name[100];
    float price;
};

void main(){
    
    union book b1, b2;
    
    strcpy(b1.name, "CPP");
    b1.price = 200.50;
    
    printf("Mybook name is %s\n", b1.name);
    printf("My book price is %.2f\n", b1.price);
    
    strcpy(b2.name, "C programming");
    b2.price = 150.80;
    
    printf("Mybook name is %s\n", b2.name);
    printf("My book price is %.2f\n", b2.price);
    
    
}