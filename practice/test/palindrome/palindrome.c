#include <stdio.h>
#include <string.h>

int main() {

    char num_string[256], backwards[256];  

    printf("Enter a number:\n");
    fgets(num_string, 256, stdin);

    num_string[strlen(num_string) - 1] = '\0';

    for (int i = strlen(num_string) - 1; i >= 0; i--) {

        for (int j = 0; j <= strlen(num_string) - 1; j++) {

            backwards[j] = num_string[i];

        }
    }

    int rvalue = strcmp(num_string, backwards);

      (rvalue != 0) {

        printf("Enter a number:\n");
    fgets(num_string, 256, stdin);

    num_string[strlen(num_string) - 1] = '\0';

    for (int i = strlen(num_string) - 1; i >= 0; i--) {

        for (int j = 0; j <= strlen(num_string) - 1; j++) {

            backwards[j] = num_string[i];

        }
    }

    int rvalue = strcmp(num_string, backwards);

    }

}