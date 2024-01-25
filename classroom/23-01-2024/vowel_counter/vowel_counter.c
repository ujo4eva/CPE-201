#include <stdio.h>
#define MAX_SIZE 50

int main() {
    char userInput[MAX_SIZE];

    int count_vowel = 0;
    
    printf("Enter any word:\n");
    
    fgets(userInput, sizeof(userInput), stdin);

    //loop through all the characters entered by the user

    for(int i=0; i < MAX_SIZE; i++) {
        if(userInput[i]=="a" || userInput[i]=="e" || userInput[i]=="i" || userInput[i]=="o" || userInput[i]=="u") {
            count_vowel ++;
            printf("%s\t", userInput[i]);
        }
    }

    printf("Total number of vowels in %s is: %d.\n", userInput, count_vowel);

    return 0;

}