#include <stdio.h>
#include <string.h>

int main () {

    char string[256], letter;
    int letter_count = 0;

    printf("Enter a string:\n");
    fgets(string, 256, stdin);

    printf("What letter do you want to check for?\n");
    scanf("%c", &letter);

    for (int i = 1; i <= strlen(string); i++) {

        if (string[i] == letter) {

            letter_count += 1;

        }
    }

    printf("%c occurs %d times in the string.", letter, letter_count);

    return 0;
}