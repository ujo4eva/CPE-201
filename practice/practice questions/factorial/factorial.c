#include <stdio.h>

int main () {

    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    int n = num;
    int i = num - 1;

    while (i > 0) {

        n *= i;

        i--;

    }

    printf("The factorial of %d is %d.", num, n);

    return 0;
}