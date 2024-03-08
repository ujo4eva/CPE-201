#include <stdio.h>
#include <math.h>

int main () {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {

        printf("%d is divisible by 3 and 5.", num);

    } else {

        printf("%d is not divisible by 3 and 5.", num);
        
    }

    return 0;

}