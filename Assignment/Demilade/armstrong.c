#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, digit, sum;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    printf("Armstrong numbers in the range %d to %d are: ", start, end);
    
    for (num = start; num <= end; num++) {
        int temp = num;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }
        if (num == sum) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    
    return 0;
}