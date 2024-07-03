//Write a program that takes a string input from the user and prints the reversed string
/*Requirements
Use fgets to read the string
Use a function to reverse the string*/

#include<stdio.h>
int main ()
{
    char name[20];
    printf("Enter your name:\n");
    fgets(name, 20,stdin);
    printf("Nice to meet you %s",name);
    return 0;
}
