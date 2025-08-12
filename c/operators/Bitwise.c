
// 10 - Decimal -> Binary

// ...2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
// ...128,64, 32, 16, 8,  4,  2,  1

// • & : Bitwise AND (e.g., a & b)
// • | : Bitwise OR (e.g., a | b)
// • ^ : Bitwise XOR (exclusive OR) (e.g., a ^ b)
// • ~ : Bitwise NOT (e.g., ~a)
// • << : Left shift (e.g., a << 2)
// • >> : Right shift (e.g., a >> 2)

// a = 7 - Decimal
// 00000111 - 7
// a << 3
// 00111000 - 56

// a >> 2
// 00000001 - 1

// 8-bit
// 3 - Decimal
// 0011 - Binary
// 5 - Decimal
// 0101 - Binary

// a b & | ~ ^
// 0 0 0 0 1 0
// 0 1 0 1 1 1
// 1 0 0 1 0 1
// 1 1 1 1 0 0

// 0001 -Binary | 1 - Decimal
// 0111 -Binary | 7 - Decimal

// 16 -bit
// 16 - Decimal
// 10000 - Binary
// 18 - Decimal
// 10010 - Binary

#include<stdio.h>

void main(){
    int a = 3, b = 5, c = 7;
    // printf("%d", a & b);
    // printf("%d", a | b);
    // printf("%d", a ^ b);
    printf("%d", c << 3);

}



