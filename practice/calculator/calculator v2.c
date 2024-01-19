#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void main() {
    double numbers[100];
    char operations[100];
    int num_count = 0;
    int op_count = 0;
    char input_string[100];
    int decimal_places = 4;
    bool shouldContinue = true;

    while (shouldContinue) {

        printf("Enter numbers and operations (separate them with spaces please): ");

        fgets(input_string, 100, stdin);

        char *token = strtok(input_string, " ");
        while (token != NULL) {

            if(isdigit(*token)) {
                numbers[num_count++] = atof(token);
            } else {
                operations[op_count++] = *token;
                }

        token = strtok(NULL, " ");

        }

        for (int i = 0; i < op_count; i++) {

            if (operations[i] != '+' &&operations[i] != '-' &&operations[i] != '*' &&operations[i] != '/') {
                printf("Invalid Operation: %c\n", operations[i]);
                return;
            } 
        }

        if (num_count - op_count !=1) {

            printf("Invalid Input, unbalanced numbers and operations\n");
            return;
        }

        for (int i = 0; i < op_count; i++) {
            if (operations[i] == '/' &&numbers[i + 1] == 0) {
                printf("Them dey divide by zero for your village abi?\n");
                return;
            }
        }
        
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

            case

            '/':

            result *= numbers[i + 1];
            break;

            }
        }

        printf("Result: %.*lf", decimal_places, result);

        printf("\nEnter another calculation (or 'q' to quit): ");
    char choice = fgetc(stdin);
    if (choice == 'q') {
        shouldContinue = false;  // Set control variable to break the loop
    }

    }


    return;

}
