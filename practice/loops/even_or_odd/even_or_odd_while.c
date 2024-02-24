#include <stdio.h>

int main () {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n % 2 == 0) {

        printf("%d is even", n);

        break;

    }
    while (n % 2 == 1) {
        
        printf("%d is odd", n);

        break;

    }
    
    return 0;
}