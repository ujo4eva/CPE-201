#include <stdio.h>
#include <math.h> //to use the pow function later

int is_armstrong(int num) {
    int originalnum, remainder, n = 0, result = 0;

    originalnum = num;

    //count the number of digits
    while (originalnum != 0) {
        originalnum /= 10;
        ++n;
    }

    originalnum = num;

    //calculate the sum of each digit raised to the power of n
    while (originalnum != 0) {
        remainder = originalnum % 10;
        result += pow(remainder, n); //using pow from math.h
        originalnum /= 10;
    }

    //check if the sum is equal to the original number
    return (result == num);
    
}

int main() {
    int start, end, i;
    int foundarmstrong = 0; //flag to track if any Armstrong numbers are found

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("The Armstrong numbers be5tween %d and %d are:\n", start, end);

    for (i = start; i<= end; ++i) {
        if (is_armstrong(i)) {
            printf("%d ", i);
            foundarmstrong = 1; //sets the flag to indicate an Armstrong number was found
        }
    }

    if (! foundarmstrong) {
        printf("No Armstrong numbers found in the given range.\n");
    }

    return 0;

}