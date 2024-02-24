#include <stdio.h>

int main () {

    int i = 1, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {

        sum += i;
        i++;

    }

    printf("The sum of all real numbers up to %d is %d.", n, sum);

    return 0;

}