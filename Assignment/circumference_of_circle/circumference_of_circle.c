#include <stdio.h>
#include <math.h>

int main() {
    int radius = 5;

    int circumference = 2 * M_PI * radius;

    printf("The circumference of a circle of radius %dcm is %dcm.\n", radius, circumference);

    return 0;

}