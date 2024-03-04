#include <stdio.h>
#include <math.h>

void print_even (int start, int end) {

    printf("\nThe even numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {

        if (i % 2 == 0) {

            printf("%d ", i);

        }
    }

}

void print_odd (int start, int end) {

    printf("\nThe odd numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {

        if (i % 2 != 0) {

            printf("%d ", i);

        }
    }

}

void print_prime (int start, int end) {

    printf("\nThe prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {

        int isPrime = 1;

        for (int j = 2; j <= sqrt(i); j++) {

            if (i % j == 0) {

                isPrime = 0;
                

            }

            break;

        }

        if (isPrime = 1) {

            printf("%d ", i);

        }


    }

}

void print_perfect (int start, int end) {

    printf("\nThe perfect squares between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {

        if (floor(sqrt(i)) == ceil(sqrt(i))) {
            
            printf("%d ", i);

        }
    }
}

int main () {

    const int start1 = 1, end1 = 100;
    int start2, end2;

    printf("Enter your range below\n\n");

    printf("Enter the starting number:\n");
    scanf("%d", &start2);

    printf("Enter the ending number:\n");
    scanf(" %d", &end2);

    print_even(start1, end1);
    print_even(start2, end2);

    print_odd(start1, end1);
    print_odd(start2, end2);

    print_prime(start1, end1);
    print_prime(start2, end2);

    print_perfect(start1, end1);
    print_perfect(start2, end2);

    return 0;
    
}