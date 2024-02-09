#include <stdio.h>
#include <math.h>

//program to print the squares of the first n natural numbers
int main() {
    //define n, an integer array for the squares, and a variable to count the number of squares
    int n, squares[n + 1], square_count;

    //prompt the user to enter a number and store it in n
    printf("Enter a number: ");
    scanf("%d", &n);

    //loop statement to take square of numbers from 1 to n, and store them in the array
    for (int i = 0; i <= n; i++) {
        squares[square_count] = pow(i, 2);
        square_count++;
    }

    printf("The squares of the first %d natural numbers are: ", n);
    
    //loop to print all the elements of the array containing the squares
    for (int i = 1; i <= square_count - 1; i++) {
        printf(" %d", squares[i]);
    }

    return 0;

}