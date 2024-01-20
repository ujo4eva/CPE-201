#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int get_numbers_and_operations (double numbers[], char operations[], int *num_count, int *op_count);

    char input_string[100];
    printf("Enter numbers and operations (separate with spaces): ");
    fgets(input_string, 100, stdin);

    char *token = strtok(input_string, " ");
    while (token = ! NULL) {
        if(isdigit(*token)) {
            numbers[*num_count] = atof(token);
            (*num_count)++;
        } else {
            operations[*op_count] = (token);
            (*op_count)++;
        }

        token = strtok(NULL, "");

    return 0;
    }