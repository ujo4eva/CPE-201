#include <stdio.h>

int main() {
    int num, max_multiplier;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("How many products do you want?: ");
    scanf("%d", &max_multiplier);

    for (int i = 1; i <= max_multiplier; i++) {
        int n = num;
        int prod = n * i;
        printf("%d x %d = %d\n", num, i, prod);
        n = num;
    }

    return 0;
}