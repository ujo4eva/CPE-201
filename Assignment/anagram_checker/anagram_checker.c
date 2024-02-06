#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>

int is_anagram(const char *str1, const char *str2) {

    
    int freq1[256] = {0};  //declare frequency array for first string
    int freq2[256] = {0};  //declare frequency array for second string

    //count frequencies of letters and numbers in str1, ignoring spaces
    while (*str1) {

        if (isalnum(*str1)) {

            freq1[tolower(*str1)]++; //convert string to lowercase 

        }

        str1++;

    }

    //count frequencies of letters and numbers in str2, also ignoring spaces
    while (*str2) {

        if (isalnum(*str2)) {

            freq2[tolower(*str2)]++; //convert string to lowercase

        }

        str2++;

    }

    //compare the frequency arrays
    for (int i = 0; i < 256; i++) {

        if (freq1[i] != freq2[i]) {

            return 0; //not anagrams

        }

    }

    return 1; //anagrams

}


int main() {

    char str1[100], str2[100];

    printf("Enter anything: ");
    fgets(str1, 100, stdin);

    printf("Now enter something else: ");
    fgets(str2, 100, stdin);

    if (is_anagram(str1, str2)) {

        printf("The strings are anagrams of each other.\n");

    } else {

        printf("The strings are not anagrams of each other.\n");

    }

    return 0;

}