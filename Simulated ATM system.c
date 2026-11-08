#include <stdio.h>
#include <stdlib.h>
int main() {
    int pin, choice, tries = 0, loggedIn = 0;
    float balance = 1000, amount;

    while (tries < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == 1234) {
            loggedIn = 1;
            break;
        }
        tries++;
        printf("Wrong PIN. You have %d tries left.\n", 3 - tries);
    }

    if (loggedIn == 0) {
        printf("Card blocked.\n");
        return 0;
    }

    do {
        printf("\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: %.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("New balance: %.2f\n", balance);
        } else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance)
                printf("Insufficient balance.\n");
            else {
                balance = balance - amount;
                printf("New balance: %.2f\n", balance);
            }
        } else if (choice == 4) {
            printf("Goodbye!\n");
        } else {
            printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

