#include <stdio.h>
#include <math.h>

int main () {

    int num;
    char check;

    printf("Enter a number:\n");
    scanf("%d", &num);

    printf("Enter 'o', or 'p' to check if the number is even, odd, or prime:\n");
    scanf(" %c", &check);

    switch (check) {

        case 'o':

            if (num % 2 == 0) {

                printf("%d is even.", num);

            } else {

                printf("%d is odd.", num);

            }

            break;

        case 'p':

            for (int i = 2; i <= sqrt(num); i++) {

                if (num % i == 0) {

                    printf("%d is not a prime number.", num);

                } else {

                    printf("%d is a prime number.", num);

                }
            }

            break;
        
        default:

            printf("%c isn't a recognised option.", check);

    }

    return 0;
    
}