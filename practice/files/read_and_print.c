#include <stdio.h>
#include <stdlib.h>

int main () {

    FILE fp = fopen("text.txt", "r");

    if (fp == NULL) {

        fp = fopen("text.txt", "w");
        
        if (fp == NULL) {

            printf("Error opening file.");

            exit(1);

        }
    }

    fseek(fp, 0, SEEK_SET);

    char buffer[100];

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {

        printf("%s", buffer); 

    }
}