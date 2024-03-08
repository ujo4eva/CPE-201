#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {

    struct bio { //define a data structure to hold the bio data

        char name[20];
        float weight; //in kilograms
        float height; //in centimeters

    };

     float calculate_BMI(struct bio *student) { 
            
            float BMI = student->weight / (student->height / 100);
            
            return BMI;

            }

    srand(time(NULL)); //helps us get values with less correlation

    struct bio student1 = {"student1", rand() % 97 + 49, rand() % 198 + 159};
    struct bio student2 = {"student2", rand() % 97 + 49, rand() % 198 + 159};
    struct bio student3 = {"student3", rand() % 97 + 49, rand() % 198 + 159};
    struct bio student4 = {"student4", rand() % 97 + 49, rand() % 198 + 159};
    struct bio student5 = {"student5", rand() % 97 + 49, rand() % 198 + 159};

    printf("BMIs:\n%s, %d\n%s, %d\n%s, %d\n%s, %d\n%s, %d", student1.name, calculate_BMI(&student1), student2.name, calculate_BMI(&student2), student3.name, calculate_BMI(&student3), student4.name, calculate_BMI(&student3), student5.name, calculate_BMI(&student5));

    return 0;

}