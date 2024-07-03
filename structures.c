/*
Using structures write a C program to define a structure type CDAccount that contains 3 variables:
balance, interest_rate and terms [months of repayment of loan portifolio] i.e. of type double,
double and integer respectively.
Have a function get_data(CDAccount the_account) that will display account terms (number of months)
and compute the account balances. [Use the top-down approach]
*/

#include<stdio.h>
#include<stdlib.h>

struct CDAccount
{
    double balance;
    double interest_rate;
    int terms;
};

void get_Data(struct CDAccount the_account);

int main()
{

    struct CDAccount myAccount;
    //requests user for CDAccount variables
    printf("Enter your account balance:");
    scanf("%lf",&myAccount.balance);

    printf("Enter interest rate:");
    scanf("%lf",&myAccount.interest_rate);

    printf("Enter the number of terms in months:");
    scanf("%d",&myAccount.terms);

    //function call
    get_Data(myAccount);

    return 0;
}

void get_Data(struct CDAccount the_account)
{   
    //Creates and declares two variables that can be used to calculate interest earned and final account balance
    double interest,finalBalance;

    //Displays account terms
    printf("Your terms in months:%d\n",the_account.terms);

    // Calculates the account balance after interest
    interest = the_account.balance*(the_account.terms/12.0)*(the_account.interest_rate/100.0);
    finalBalance = the_account.balance+interest;

    //Displays the final balance in the account
    printf("Computed balance after %d months:%.2f\n",the_account.terms,finalBalance);
}
