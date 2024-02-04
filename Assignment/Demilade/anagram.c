#include <stdio.h>
#include <string.h>

int checkAnagram(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return 0; // Not anagrams if lengths are different
    }
    
    int count[256] = {0}; // Assuming ASCII characters
    
    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // Not anagrams if character counts are different
        }
    }
    
    return 1; // Strings are anagrams
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    
    if (checkAnagram(str1, str2)) {
        printf("The two strings are anagrams.\n");
    } else {
        printf("The two strings are not anagrams.\n");
    }
    
    return 0;
}