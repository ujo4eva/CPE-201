#include <stdio.h>
#include <math.h>

int main() {
    double radius, area, volume;

    // Input radius from user
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Calculate area and volume
    area = 4 * M_PI * pow(radius, 2);
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display results
    printf("Area of the sphere: %.2lf\n", area);
    printf("Volume of the sphere: %.2lf\n", volume);

    return 0;
}