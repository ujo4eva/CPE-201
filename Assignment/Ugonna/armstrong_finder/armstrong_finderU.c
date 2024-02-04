#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int n = 0, result = 0;

    // Count the number of digits in num
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of nth power of individual digits
    while (originalNum != 0) {
        int digit = originalNum % 10;
        result += pow(digit, n);
        originalNum /= 10;
    }

    return (result == num);
}

int main() {
    int start, end;

    // Input the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    // Check for a valid range
    if (start > end) {
        printf("Error: Invalid range. Starting number should be less than or equal to the ending number.\n");
        return 1;
    }

    // Display Armstrong numbers within the given range
    printf("Armstrong numbers in the range [%d, %d]: ", start, end);
    for (int i = start; i <= end; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}