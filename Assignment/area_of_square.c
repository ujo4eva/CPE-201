#include <stdio.h>

//Function to calculate the area of a given square
int main() {
    int length, area;

    //get user input for the length of one side of the square
    printf("How long is L?: ");
    scanf("%d", &length);

    //compute the area of said square 
    area = (length * length);
    printf("The area of the square is %d sq. units.\n", area);

    return 0;
}