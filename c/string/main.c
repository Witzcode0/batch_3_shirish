#include<stdio.h>
#include<string.h>

void main(){

    // char c[] = "abcd";

    // char c[50] = "abcd";

    // char c[] = {'a', 'b', 'c', 'd', '\0'};

    // char c[5] = {'a', 'b', 'c', 'd', '\0'};
    // char company[3] = "BIT";

    // Access element of the string
    // printf("%c", company[0]);

    // int len = sizeof(company)/ sizeof(company[0]);
    // access string element using for loop
    // for(int start = 0; start <len; start++){
        // printf("%c", company[start]);
    // }

    // char first_str[20] = "hello";
    // char second_str[20] = "Hello";
    // char third_str[20];



    // strcat(first_str, second_str);

    // int res= strcmp(first_str, second_str);

    char str1[20] = "Hello";
    char str2[20];

    // copying str1 to str2
    // strcpy(str2, str1);

    // puts(str2); // C programming
    // printf("%d", strlen(str1));

    //char name[20];
    //printf("Enter name: ");
    //scanf("%s", &name);
    //printf("Your name is %s.", name);

    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
}
