#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void easy() {

    int random_num = rand() % 51 + 1;
    int guess, i = 5;

    printf("Guess the mystery number between 1 & 50 (you have %d tries left): \n", i);

    while (i > 0) {

        scanf("%d", &guess);

        i--;


        if (guess == random_num) {

            printf("Congratulations, you guessed the mystery number!");

            break;

        } else if (guess > random_num) {

            printf("Too high, try again ;) \n (You have %d tries left):\n", i);

            continue;

        } else if (guess < random_num) {

            printf("Too low, try again ;) \n (You have %d tries left):\n", i);

            continue;

        }
        
    }

    printf("The mystery number was %d", random_num);

}

void medium() {

    int random_num = rand() % 101 + 1;
    int guess, i = 5;


    printf("Guess the mystery number between 1 & 100 (you have %d tries left): \n", i);

    while (i > 0) {

        scanf("%d", &guess);

        i--;


        if (guess == random_num) {

            printf("Congratulations, you guessed the mystery number!");

            break;

        } else if (guess > random_num) {

            printf("Too high, try again ;) \n (You have %d tries left):\n", i);

            continue;

        } else if (guess < random_num) {

            printf("Too low, try again ;) \n (You have %d tries left):\n", i);

            continue;

        }
        
    }

    printf("The mystery number was %d", random_num);

}

void hard() {

    int random_num = rand() % 151 + 1;
    int guess, i = 5;

    printf("Guess the mystery number between 1 & 150 (you have %d tries left): \n", i);

    while (i > 0) {

        scanf("%d", &guess);

        i--;


        if (guess == random_num) {

            printf("Congratulations, you guessed the mystery number!");

            break;

        } else if (guess > random_num) {

            printf("Too high, try again ;) \n (You have %d tries left):\n", i);

            continue;

        } else if (guess < random_num) {

            printf("Too low, try again ;) \n (You have %d tries left):\n", i);

            continue;

        }
        
    }

    printf("The mystery number was %d", random_num);

}

int main () {

    srand(time(NULL));

    int difficulty;

    printf("Enter 1, 2, or 3 to select your difficulty\n Easy(10 odds), Medium(20 odds), Hard(30 odds): ");
    scanf("%d", &difficulty);

    if (difficulty == 1) {
        easy();
    }
    else if (difficulty == 2) {
        medium();
    }
    else if (difficulty == 3) {
        hard();
    }

    return 0;
}