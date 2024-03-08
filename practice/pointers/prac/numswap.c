#include <stdio.h>

void swap (int *num1, int *num2) {

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

int main () {

    int x = 1;
    int y = 2;

    swap (&x, &y);

    printf("%d, %d", x, y);

    return 0;
}