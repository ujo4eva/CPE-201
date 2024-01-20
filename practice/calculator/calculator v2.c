#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

int get_numbers_and_operations (double numbers[], char operations[], int *num_count, int *op_count);

    char input_string[100];
    printf ("Enter numbers and operations (separate with spaces): ");
    fgets(input_string, 100, stdin);

    char *token = strtok(input_string, " ");
    while (token != NULL) {
        if (isdigit(*token) || (strlen(token) > 1 && token[0] == '-' && isdigit(token[1]))) {
            numbers[num_count] = atof(token);
            num_count++;
        } else {
            operations[op_count] = token[0];
            op_count++;
        }
        token = strtok(NULL, " ");
    }