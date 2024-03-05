#include <stdio.h>
#include <math.h>

int main () {

    printf("The perfect squares between 50 and 2000 are:\n");

    //iterate through the range
    for (int i = 50; i <= 2000; i++) {

        if (floor(sqrt(i)) == ceil(sqrt(i))) { //check if i is a perfect square by comparing the rounded down square root with the same square root rounded up

            printf("%d ", i);

        }

    }

    return 0;

}