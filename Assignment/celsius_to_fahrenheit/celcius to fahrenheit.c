#include <stdio.h>

double main() {
    double c_temp;

    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &c_temp);

    double f_temp = ((9/5) * c_temp) + 32;

    printf("%lf degrees Celsius is %lf degrees Fahrenheit.", c_temp, f_temp);

    return 0;
}