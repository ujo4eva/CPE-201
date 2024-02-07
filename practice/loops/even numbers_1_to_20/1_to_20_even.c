#include <stdio.h>

int main () {
    int num = 20, even_array[20], even_count;

    for (int i = 2; i <= num; i++) {
        if (i % 2 == 0) {
            even_array [even_count] = i;
            even_count++;
        }
    }

    printf("The even numbers between 1 and %d are: ", num);

    for (int i = 0; i < even_count; i++) {
        printf(" %d", even_array[i]);
    }

    return 0;

}