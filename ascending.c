#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 100

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, j, temp;

    printf("Input the size of array: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Please enter a number between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    /* Bubble sort */
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Elements of array in sorted ascending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}












