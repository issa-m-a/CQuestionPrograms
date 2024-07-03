/*
Write a program that calculates the factorial of a number provided by the user.
Requirements
Use scanf to read the integer.
Use a loop to calculate the factorial.
*/
#include<stdio.h>
int main()
{
    int number,result;
    printf("Enter any number:\n");
    scanf("%d",&number);
    for (number =1; number <=720 ; number++)
    {
        result *=number;
    }
    
    return 0;
}

