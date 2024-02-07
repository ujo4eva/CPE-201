#include <stdio.h>
#include <math.h>

int main() {
    int n, squares[n + 1], square_count;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        squares[square_count] = pow(i, 2);
        square_count++;
    }

    printf("The squares of the first %d natural numbers are: ", n);

    for (int i = 1; i <= square_count - 1; i++) {
        printf(" %d", squares[i]);
    }

    return 0;

}