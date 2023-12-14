#include <stdio.h>

//Function to calculate the cube root of a number using binary search
double cube_root(double num) {

    //start is set to 0, which represents the smallest possible cube root of whatever number the user might input
    //end is set to whatever number the user inputs, as it's technically the largest possible cube root that could be correct
    //we also pick a random precision value
    double start = 0, end = num;
    double mid, precision = 0000001;

    //Function compares the difference between our start value and end value with the chosen precision value
    //As long as end minus start remains larger than precision, find mid , which is half the difference between end and start, and take it's cube
    while (end - start > precision) {
        mid = (start + end) / 2;

        //If the cube of mid is larger than our input, then we take mid to be our new end, otherwise, do the opposite
        //Function loops until the difference between start and end is smaller than the chosen precision value
        if (mid * mid * mid > num) {
            end = mid;
        } else {
            start = mid;
        }
    }
    
    return mid;

}

int main() {
    double number;

    //Get user input
    printf("Choose your number: ");
    scanf("%lf", &number);

    //Use the custom function to calculate and print the cube root
    double cube_root_value = cube_root(number);
    printf("The cube root of %.2lf is %.2lf\n", number, cube_root_value);

    return 0;
}