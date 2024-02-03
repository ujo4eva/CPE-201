#include <stdio.h>
#include <math.h>

int main() {
    double radius;

    printf ("Enter the radius of the sphere in question: ");
    scanf ("%lf", &radius);

    double sphere_area = 4 * M_PI * pow(radius, 2);
    double sphere_volume = (4/3) * M_PI * pow(radius, 3);

    printf("The total surface area of your sphere of radius %lfcm is %lfcm^2 and it's volume is %lfcm^3.\n", radius, sphere_area, sphere_volume);

    return 0;

}
