#include <stdio.h>
#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, value, pos;

    printf("Input the size of array: ");
    scanf("%d", &n);

    if (n < 1 || n >= MAX) {
        printf("Please enter a size between 1 and %d.\n", MAX - 1);
        return 1;
    }

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);
    printf("Input the position, where the value is to be inserted (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("The current list of the array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    /* Shift elements one place to the right, starting from the end */
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;   /* positions are 1-based */
    n++;

    printf("\nAfter inserting the element the new list is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
