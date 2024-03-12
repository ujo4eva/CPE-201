#include <stdio.h>
#include <string.h>

char string[256], reversed[256];

int reverse(char string) {

    for (int i = 0; i < strlen(string); i++ ) {

        for (int j = strlen(string) - 1; j >= 0; j--) {

            reversed[j] = string[i];

        }
    }

    return 0;

}

int main () {

    printf("Enter a string:\n");
    fgets(string, 255, stdin);

    reverse(string);

    int rvalue = strcmp(string, reversed);

    while (rvalue != 0) {

        printf("The string is not a palindrome.");
        
        printf("Enter a string:\n");
        fgets (string, 255, stdin);

        reverse(string);

        int rvalue = strcmp(string, reversed);
    }

    return 0;
    
}