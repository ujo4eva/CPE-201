#include <stdio.h>

int main()  {
    int num1, num2, num3;

    //get user input for the three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    //use if-else ladder to compare numbers and print result
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %d.\n", num1);
    } else

    if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %d.\n", num2);
    } else {
        printf("The largest number is %d.\n", num3);
    }

    return 0;
}