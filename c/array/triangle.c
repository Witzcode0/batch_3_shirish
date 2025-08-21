// Online C compiler to run C program online
#include <stdio.h>

void main() {
    float area, b, h;
    
    printf("Enter weight and height: ");
    scanf("%f %f", &b, &h);
    
    area = 0.5 * b * h;
    
    printf("Area of Tri: %f", area);
    
}