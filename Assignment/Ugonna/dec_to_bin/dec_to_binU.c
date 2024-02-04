#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int index = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    // Display binary representation
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Input decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Call the custom function to convert and display binary
    decimalToBinary(decimal);

    return 0;
}