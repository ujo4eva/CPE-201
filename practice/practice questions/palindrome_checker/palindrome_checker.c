#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse (char string[256], int start, int end) {

    char reversed[256];

    for (int i = end; i >= start; i--) {

        for (int j = start; j <= end; j++) {

            if (isalnum (string[i])) {

                reversed[j] = string[i];

            }
        }
    }

    printf("%s\n%s", string, reversed);

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

    printf("%s", str);

    reverse(str, 0, strlen(str) - 1);

    return 0;
}