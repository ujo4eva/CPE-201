#include <stdio.h>
#include <stdlib.h>

void reverse (int *arr, int size) {

    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;

        *start++;
        *end--;

    }
}

int main () {

    int *array = (int*)malloc(5 * sizeof(10));

    if (array = NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i <= 9; i++) {

        array[i] = i + 1;

    }

    printf("Original array:\n");
    for(int i = 0; i <= 9; i++) {

        printf("%d ", array[i]);

    }

    reverse (array, 10);

    printf("New array:\n");
    for (int i = 0; i <= 9; i++) {

        printf("%d ", array[i]);

    }

    return 0;
    
}