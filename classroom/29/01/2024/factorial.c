#include <stdio.h>

int n, i, result = 1;

int factorial() {

    if (n < 0) {

        printf("Factorial of negative numbers is undefined you dimwit.");
        return 1;

    } else {

        for (i = 1; i <= n; i++)
            result *= i;
    }

    printf("The factorial of %d is %d", n, result);

    return 0;
}

int main() {
    
    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(n);
}