#include <stdio.h>
#include <string.h>

int main() {
    char num[100], reversed[100];

    printf("Enter a number: ");
    fgets(num, 100, stdin);

    printf("In reverse, that's: ");

    for (int i = strlen(num); i >= 0; i--) {
        
        printf("%c", num[i]);

    }

    return 0;

}