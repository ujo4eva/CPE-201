#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void sum_of (int *array, int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {

        sum = sum + array[i];

    }

    printf("The sum of all numbers in the array is %d", sum);
}

int main () {

    int array_size;

    printf("How many elements are in your array?:\n");
    scanf("%d", &array_size);

    int num_array[array_size];

    printf("Enter the numbers in your array: \n");

    for (int i = 0; i < array_size; i++) {

        scanf("%d", &num_array[i]);

    }


    sum_of (num_array, array_size);

    return 0;
}