#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operation;
    int decimal_places = 10;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operation) {
        case '+':

        printf("%lf + %lf = %.*lf", num1, num2, decimal_places, num1 + num2);

        break;

        case '-':

        printf("%lf - %lf = %.*lf", num1, num2, decimal_places, num1 - num2);

        break;

        case '*':

        printf("%lf * %lf = %.*lf", num1, num2, decimal_places, num1 * num2);

        break;

        case '/':

            if (num2 == 0) {

                printf("Them dey divide by zero for your village abi?\n");

            } else {
                printf("%lf / %lf = %.*lf", num1, num2, decimal_places, num1 / num2);
            }

        break;

            default:

                printf("Chill for me biko, i can only do +, -, *, and / right now.");


    }

    return 0;

}
