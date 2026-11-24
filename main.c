#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Please enter a number between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Input %d number of elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe values stored into the array are : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nThe values stored into the array in reverse are : ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}

