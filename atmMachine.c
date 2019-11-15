//Including the mai stdio library
#include <stdio.h>

//Including functions declared below the main function
int anotherTransactionn(void); 
int transaction(void);

//Declring the account balance, amounttoWithdraw and amountToDeposit variables
int balance;
int amountToWithdraw;
int amountToDeposit;

//Declaring the main function
int main(void) {
    transaction();
}

//Declaring the transaction Function
int transaction(void) {
    int choice;
    printf("What would you like to do today? Enter one of the follwing option.\n");
    printf(" 1. Check Balance\n 2. Cash Withdrawal\n 3. Cash Deposit\n");
    scanf("%i", &choice);
    switch (choice)
    {
    //Check for choice 1 >>> Check balance
    case 1:
        printf("Your current balance is : %d\n", balance);
        anotherTransactionn();
        break;
    
    //Check for choice 2 >>> Cash Withdrawal
    case 2:
        printf("How much money would you like to withdraw?\n");
        scanf("%i", &amountToWithdraw);
        if(amountToWithdraw > balance) {
            printf("Sorry, you don't have enough money, go earn something boomer\n.");
            anotherTransactionn();
        }else {
            balance = balance - amountToWithdraw;
            printf("Your new balance is %d\n", balance);
            anotherTransactionn();
        }
        break;

    //Check for Choice 3 >>> Deposit Money
    case 3:
        printf("How much money would you like to Deposit?\n");
        scanf("%i", &amountToDeposit);
        balance = balance + amountToDeposit;
        printf("Your new balance is: %d\n", balance);
        anotherTransactionn();
        break;
    
    //The default statement if any of the choices doesn't work
    default:
        return 0;
        break;
    }
}


//Declaring Another Transaction Function
int anotherTransactionn(void) {
    int anotherTransaction;
    printf("Would you like another transaction?\n Press 1 for yes and 2 for no.\n");
    scanf("%i", &anotherTransaction);
    switch(anotherTransaction) {
        //Checking for yes
        case 1:
            transaction();
        break;

        //Checking for no
        case 2:
            printf("Alrighty! Thanks for banking at Bessie's Bank.\n YOUR FUTURE IS SAFE WITH US\n");
            return 0;
        break;
    }
}