#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Input coordinates from the user
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate distance using the distance formula
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Display the result
    printf("Distance between the two points: %.2lf\n", distance);

    return 0;
}