//program to reverse a number array (and I am going to try to implement recursion)
#include <stdio.h>

void reverse(int *num_array, int start, int end) {

    if (start >= end) {
        return;
    }

    int temp = num_array[start];
    num_array[start] = num_array[end];
    num_array[end] = temp;

    reverse(num_array, start + 1, end - 1);

    return;

}

int main() {
    int num_array[256];
    int num_count;

    printf("How many numbers are in your array? (max. 256): \n");
    scanf("%d", &num_count);

    printf("Now enter your numbers: \n");
    for (int i = 0; i < num_count; i++) {
        scanf("%d", &num_array[i]);
    }

    reverse(num_array, 0, num_count);

        printf("Reversed array: \n");
        printf("%d", num_array[1]);

    for (int i = 2; i <= num_count; i++) {
        printf(", %d", num_array[i]);
    }

    printf("\n:)\n");

    return 0;

}