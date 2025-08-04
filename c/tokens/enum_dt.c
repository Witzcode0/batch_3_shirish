#include<stdio.h>

enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

void main(){

    enum Weekday yesterday;

    yesterday = Monday;

    printf("Yesterday was : %d", yesterday);

}
