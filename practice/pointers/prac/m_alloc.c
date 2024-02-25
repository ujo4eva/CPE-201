#include <stdio.h>
#include <stdlib.h>

int *allocate_array (int size) {

    int *arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {

        printf("Memory allocation failed");

        return NULL;
    }

    return arr;

}

int main () {

    int size = 10;
    int *arr = allocate_array(size);

    arr[0] = 32;

    printf("%d", arr[0]);

    free(arr);

    printf("%d", arr[0]);

    return 0;
}