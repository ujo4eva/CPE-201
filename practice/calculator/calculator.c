#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operation;
    int decimal_places = 10;

    scanf("%lf", &num1);
    scanf(" %c", &operation);
    scanf("%lf", &num2);


    switch (operation) {
        case '+':

            if (fmod(num1 + num2, 1.0) == 0) {

                printf("%.0lf + %.0lf = %.0lf", num1, num2, num1 + num2);

            } else {

                printf("%lf + %lf = %.*lf", num1, num2, decimal_places, num1 + num2);

            }


        break;

        case '-':

            if (fmod(num1 - num2, 1.0) ==0) {

                printf("%.0lf - %.0lf = %.0lf", num1, num2, num1 - num2);

            } else {

                printf("%lf - %lf = %.*lf", num1, num2, decimal_places, num1 - num2);

            }

        break;

        case '*':

            if (fmod(num1 * num2, 1.0) ==0) {

                printf("%.0lf * %.0lf = %.0lf", num1, num2, num1 * num2);

            } else {

                printf("%lf * %lf = %.*lf", num1, num2, decimal_places, num1 * num2);

            }

        break;

        case '/':

            if (num2 == 0) {

                printf("Them dey divide by zero for your village abi?\n");

            } else
                
            if (fmod(num1 / num2, 1.0) ==0) {

                printf("%.0lf / %.0lf = %.0lf", num1, num2, num1 / num2);
            
            } else {

                printf("%lf / %lf = %.*lf", num1, num2, decimal_places, num1 / num2);
            
            }

        break;

            default:

                printf("Chill for me biko, I can only do +, -, *, and / right now.");


    }

    return 0;

}
