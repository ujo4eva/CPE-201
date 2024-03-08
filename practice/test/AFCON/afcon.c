#include <stdio.h>

int main () {

    int Group_A[5], Group_B[5], Group_C[5], Group_D[5], Group_E[5], Group_F[5];


    Group_A[4] = '\0';

    for (int i = 1; i <= 4; i++) {

        for (int j = 0; j <= 3; j++) {

            Group_A[j] = i;

        }
    }

    

    Group_B[4] = '\0';

    for (int i = 5; i <= 8; i++) {

        for (int j = 0; j <= 3; j++) {

            Group_B[j] = i;

        }
    }

    

    Group_C[4] = '\0';

    for (int i = 9; i <= 12; i++) {

        for (int j = 0; j <= 3; j++) {

            Group_C[j] = i;

        }
    }

    

    Group_D[4] = '\0';

    for (int i = 13; i <= 16; i++) {

        for (int j = 0; j <= 3; j++) {

            Group_D[j] = i;

        }
    }




    Group_E[4] = '\0';

    for (int i = 17; i <= 20; i++) {

        for (int j = 0; j <= 3; j++) {

            Group_E[j] = i;

        }
    }

    


    Group_F[4] = '\0';

    for (int i = 21; i <= 24; i++) {

        for (int j = 0; j <= 3; j++) {

            Group_F[j] = i;

        }
    }


for (int i = 0; i <= 4; i++) {

    printf("%d", Group_A[i]);
    
}


return 0;

}