#include <stdio.h>

int main () {

    int t1, t2, tn;

    printf("Enter the first term:\n");
    scanf("%d", &t1);

    printf("Enter the second term:\n");
    scanf(" %d", &t2);

    printf("The series is: \n%d %d ", t1, t2);

    int i = 0;

    while (i < 20) {

        tn = t1 + t2;

        printf("%d ", tn);

        t1 = t2;
        t2 = tn;

        i++;
        
    }

    return 0;

}