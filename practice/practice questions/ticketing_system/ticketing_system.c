#include <stdio.h>

int main () {

    int age, price = 0;

    for (int i = 1; i <= 5; i++) {

        printf("Enter your age: \n");
        scanf("%d", &age);

        if (age < 4) {

            price += 0;

        } else {

            price += 100;

        }
    }

    printf("Total ticket price is $%d.", price);

    return 0;
    
}