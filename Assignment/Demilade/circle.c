#include <stdio.h>

#define PI 3.142

int main() {
   float radius = 5.0;
   float circumference = 2 * PI * radius;

   printf("The circumference of a circle with radius %.2f cm is %.2f cm\n", radius, circumference);
   
   return 0;
}