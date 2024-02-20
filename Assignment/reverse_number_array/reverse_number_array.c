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
    int num_array[100];
    int num_elements;

    printf("How many numbers are in your array? (max. 100): ");
    scanf("%d", &num_elements);

    if (num_elements > 100) {
        printf("Sorry, can't have more than 100 elements.");
        return 1; //indicate an error
    }

    printf("Enter your chosen numbers: ", num_elements);
        for (int i = 0; i < num_elements; i++) {
            scanf("%d", &num_array[i]);
    }

    reverse(num_array, 0, num_elements - 1);
    printf("Reversed array: "); {
        for (int i = 0; i < num_elements; i++)
    printf("%d ", num_array[i]);
    }

    printf("\n:)\n");

    return 0;

}