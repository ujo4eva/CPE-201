#include <stdio.h>

void printBinary(int dec) {
    if (dec != 0) {
        printBinary(dec / 2); // Recursive call for remaining digits
        printf("%d", dec % 2); // Print the current digit
    }
}

int main() {
    int dec;

    printf("Enter a number in base 10: ");
    scanf("%d", &dec);

    printf("In binary, that's: ");
    printBinary(dec);
    printf("\n");

    return 0;
}