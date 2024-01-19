#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int get_numbers_and_operations(double numbers[], char operations[], int *num_count, int *op_count) {
    char input_string[100];
    printf("Enter numbers and operations (separate them with spaces please): ");
    fgets(input_string, 100, stdin);

    char *token = strtok(input_string, " ");
    while (token != NULL) {
        if (isdigit(*token)) {
            numbers[*num_count] = atof(token);
            (*num_count)++;
        } else {
            operations[*op_count] = *token;
            (*op_count)++;
        }
        token = strtok(NULL, " ");
    }
    return 0;
}

bool validate_input(int num_count, int op_count, char operations[]) {
    for (int i = 0; i < op_count; i++) {
        if (operations[i] != '+' && operations[i] != '-' && operations[i] != '*' && operations[i] != '/') {
            printf("Invalid Operation: %c\n", operations[i]);
            return false;
        }
    }

    if (num_count - op_count != 1) {
        printf("Invalid Input, unbalanced numbers and operations\n");
        return false;
    }
    return true;
}

double perform_calculation(double numbers[], char operations[], int op_count) {
    double result = numbers[0];
    for (int i = 0; i < op_count; i++) {
        switch (operations[i]) {
            case
 
'+':
                result += numbers[i + 1];
                break;
            case
 
'-':
                result -= numbers[i + 1];
                break;
            case
 
'*':
                result *= numbers[i + 1];
                break;
            case '/':
                if (numbers[i + 1] == 0) {
                    printf("Them dey divide by zero for your village abi?\n");
                    return NAN; // Signal error for division by zero
                }
                result /= numbers[i + 1];
                break;
        }
    }
    return result;
}

int main() {
    double numbers[100];
    char operations[100];
    int num_count = 0, op_count = 0;
    int decimal_places = 4;
    bool shouldContinue = true;

    while (shouldContinue) {
        get_numbers_and_operations(numbers, operations, &num_count, &op_count);

        if (!validate_input(num_count, op_count, operations)) {
            continue;
        }

        double result = perform_calculation(numbers, operations, op_count);

        if (!isnan(result)) { // Check for error from division by zero
            printf("Result: %.*lf\n", decimal_places, result);
        }

        printf("\nEnter another calculation (or 'q' to quit): ");
        char choice = fgetc(stdin);
        if (choice == 'q') {
            shouldContinue = false;
        }
    }

    return 0;
}