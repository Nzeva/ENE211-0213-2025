#include <stdio.h>
#include <stdlib.h>
/*
    SIMULATED ATM SYSTEM
    Features: PIN login (3 tries), check balance, deposit,
              withdraw, multiple transactions until exit.
*/

#include <stdio.h>

float balance = 1000;

int login() {
    int pin, i;

    for (i = 0; i < 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == 1234) {
            return 1;
        }
        printf("Wrong PIN.\n");
    }
    return 0;
}

void deposit() {
    float amount;

    printf("Enter amount: ");
    scanf("%f", &amount);
    balance = balance + amount;
    printf("Deposit successful.\n");
}

void withdraw() {
    float amount;

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance = balance - amount;
        printf("Withdrawal successful.\n");
    }
}

int main() {
    int choice;

    printf("===== SIMULATED ATM SYSTEM =====\n\n");

    if (login() == 0) {
        printf("Card blocked.\n");
        return 0;
    }

    do {
        printf("\n1. Check balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: %.2f\n", balance);
        } else if (choice == 2) {
            deposit();
        } else if (choice == 3) {
            withdraw();
        }
    } while (choice != 4);

    printf("Thank you for using the Simulated ATM System.\n");
    return 0;
}
