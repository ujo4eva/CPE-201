#include <stdio.h>

int n;

void even_or_odd () {

    if (n % 2 == 0) {

        printf("%d is even\n", n);

    } else {

        printf("%d is odd\n", n);

    }

    return;
}

int main() {

    printf("Enter any number: ");
    scanf("%d", &n);

    even_or_odd(n);

    return 0;

}