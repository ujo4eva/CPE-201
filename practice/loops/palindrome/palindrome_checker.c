#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[256], backwards[256];
    int i, j;

    printf("Enter a string: ");
    fgets(str, strlen(str), stdin);

    for (i = strlen(str); i >= 0; i--) {
       for (j = strlen(str) - i; j <= strlen(str); j++) {
        backwards[j] = str[i];
       }
    }

    backwards[j + 1] = '\0';
    

    if ( strcmp(str, backwards) == 0) {
        printf("%s is a palindrome.", str);
    } else {
        printf("%s is not a palindrome.", str);
    }

    return 0;

}