#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replace(char string[256], char old, char new) {

    for (int i = 0; i <= strlen(string); i++) {

        if (string[i] == old) {

            if (i % 2 == 1) {

                string[i] = toupper(new);

            } else {

                string[i] = new;

            }
        }
    }

    printf("Your new string is: \n");
    printf("%s", string);

}

int main () {

    char string[256];
    char old, new;

    printf("Enter a string, followed by the character you want to replace: \n");
    fgets(string, 256, stdin);
    scanf("%c\n", &old);

    printf("Enter the letter you want \"%c\" to be replaced with: \n", old);
    scanf("%c", &new);

    tolower(new);

    replace(string, old, new);

    return 0;

}