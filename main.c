#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, j, count, found = 0;

    printf("Print all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
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

    printf("The unique elements found in the array are: ");
    for (i = 0; i < n; i++) {
        count = 0;
        /* count how many times arr[i] appears in the whole array */
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1) {   /* appears only once -> unique */
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found)
        printf("(none)");

    printf("\n");
    return 0;
}
