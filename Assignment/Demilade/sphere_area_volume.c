#include <stdio.h>

int main()
{
    float radius, area, volume;
    const float PI = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    area = 4 * PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("The area of the sphere is %.2f square units.\n", area);
    printf("The volume of the sphere is %.2f cubic units.\n", volume);

    return 0;
}