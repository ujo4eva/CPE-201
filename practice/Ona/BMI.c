#include <stdio.h>
#include <math.h>

int main() {

    struct bio {
        float height; // in metres
        float weight; // in kilograms
    };

    struct bio student1 = {1.7, 59.9};

    float calculate_BMI(struct bio *student) {
        float BMI = student->weight / pow(student->height, 2);
        return BMI;  // Return the calculated BMI
    }

    float bmi_value = calculate_BMI(&student1);  // Call the function and store result
    printf("The BMI of the student is %.2f\n", bmi_value);  // Print BMI with 2 decimal places

    return 0;
}
