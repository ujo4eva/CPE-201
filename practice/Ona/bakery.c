#include <stdio.h>
#include <math.h>

int prime (int num) {

    int isPrime = 1;

    for (int i = 2; i <= sqrt(num); i++) {

        if (num % i == 0) {

            isPrime = 0;

        }
    }

    return isPrime;

}

int main () {

    printf("The positions of all the butter bread are at:");

    for (int i = 1; i <= 1000; i++) {

        if (i % 2 != 0 && prime(i) == 1) {

            printf("%d ", i);

        } 

    }

    printf("\n\n\nThe positions of fruit bread are at: ");

    for (int i = 1; i <= 1000; i++) {

        if (i % 2 == 0) {

            printf("%d ", i);

        }
    }

    return 0;

}