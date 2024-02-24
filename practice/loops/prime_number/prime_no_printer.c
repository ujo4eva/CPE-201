#include <stdio.h>
#include <math.h>

int main () {

    int end;

    printf("Enter the end number: ");
    scanf("%d", &end);

    for (int i = 2; i < end; i++) {

        int isPrime = 1;

        for (int j = 2; j <= sqrt(i); j++) {

            if (i % j == 0) {

                isPrime = 0;

                break;

            }
        }

        if (isPrime) {

            printf("%d ", i);

        }
    }

return 0;
    
}