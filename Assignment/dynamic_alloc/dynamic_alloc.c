#include <stdio.h>
#include <stdlib.h>

int *remove_duplicates (int num_array[], int size, int *new_size) {

    int *new_array = (int*)malloc(size * sizeof(int));

    if (new_array == NULL) {

        printf("Memory allocation failed!");

        return 1;

    }

    int new_index = 0;

    for (int i = 0; i < size; i++) {

        int is_duplicate = 0;

        for (int j = 0; j < new_index; j++) {

            if (num_array[i] == new_array[j]) {

                is_duplicate = 1;

                break;

            }
        }

        if (!is_duplicate) {

            new_array[new_index] = num_array[i];

        }
    }

    *new_size = new_index;

    return new_array;

}

int main () {

    int size;

    printf("Enter the size of your array: \n");
    scanf("%d", &size);

    int num_array[size];

    printf("Enter the array elements: \n");

    for (int i = 0; i < size; i++) {

        scanf("%d", &num_array[i]);

    }

    int new_size;
    int *unique_array = remove_duplicates (num_array, size, &new_size);

    if (unique_array == NULL) {

        printf("Memory allocation failed!\n");

        return 1;

    }

    printf("Unique elements:\n");
    
    for (int i = 0; i < new_size; i++) {

        printf("%d", unique_array[i]);

    }

    printf("\n");

    free(unique_array);

    return 0;

}