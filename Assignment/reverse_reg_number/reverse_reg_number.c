#include <stdio.h>

void reverse(char *str) {
    if (*str) {
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[100];

    printf("Enter your registration number: ");
    fgets(str, 100, stdin);

    reverse(str);
    printf("\nHeh, that's funny innit?\n");

    return 0;
}