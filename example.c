#include <stdio.h>
#include <stdlib.h>

// Define the structure type CDAccount
struct CDAccount {
    double balance;
    double interest_rate;
    int terms; // number of months
};

// Function prototype
void get_data(struct CDAccount the_account);

int main() {
    struct CDAccount my_account;

    // Request user input for the CDAccount variables
    printf("Enter your account balance: ");
    scanf("%lf", &my_account.balance);

    printf("Enter interest rate: ");
    scanf("%lf", &my_account.interest_rate);

    printf("Enter the number of terms in months: ");
    scanf("%d", &my_account.terms);

    // Function call
    get_data(my_account);

    return 0;
}

// Function definition
void get_data(struct CDAccount the_account) {
    double interest, final_balance;

    // Display account terms
    printf("Your terms in months: %d\n", the_account.terms); // Fixed to display terms

    // Calculate the account balance after interest
    interest = the_account.balance * (the_account.terms / 12.0) * (the_account.interest_rate / 100.0);
    final_balance = the_account.balance + interest;

    // Display the final balance in the account
    printf("Computed Balance after %d months: %.2f\n", the_account.terms, final_balance);
}
