#include <stdio.h>
#include <string.h>

void reverse (char string[256], int start, int end) {

    char reversed[256];

    for (int i = start; i <= end; i++) {

        for (int j = end; j >= start; j--) {

            reversed[j] = string[i];

        }
    }

    isPalindrome(string, reversed);

}

int isPalindrome (char string[256], char reversed[256]) {

    int rvalue = strcmp(string, reversed);

    if (rvalue == 0) {

        printf("The string is a Palindrome.");

    } else {

        printf("The string is not a Palindrome.");

    }

    return 0;
}

int main () {

    char str[256];

    printf("Enter a string:\n");
    fgets(str, 256, stdin);

    reverse(str, 0, strlen(str) - 1);

    return 0;
}