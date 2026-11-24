#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 5   /* change to 10 or any size you like */

int buffer[BUFFER_SIZE];
int head  = 0;   /* index where the NEXT sample will be written */
int count = 0;   /* how many valid samples are stored (max BUFFER_SIZE) */

/* Insert a new sample; overwrites the oldest one when full */
void insert_sample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;     /* circular indexing */
    if (count < BUFFER_SIZE)
        count++;
}

/* Print samples from oldest to newest */
void print_samples(void) {
    int i, start;

    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    /* Not full yet: oldest is at index 0. Full: oldest is at head. */
    start = (count < BUFFER_SIZE) ? 0 : head;

    printf("Samples (oldest -> newest): ");
    for (i = 0; i < count; i++)
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    printf("\n");
}

int main(void) {
    int choice, value;

    printf("Circular Data Logger (BUFFER_SIZE = %d)\n", BUFFER_SIZE);

    do {
        printf("\n1. Insert new sample\n2. Print samples\n3. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1)
            break;

        switch (choice) {
            case 1:
                printf("Enter sensor value: ");
                scanf("%d", &value);
                insert_sample(value);
                break;
            case 2:
                print_samples();
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}

