#include <stdio.h>

struct employee {
    char name[50];
    char company_ID[20];
    float salary;
};

int main() {

    struct employee chiaza = {"Anokwu Daniella Chiaza", "RUN/CPE/22/12028", 538122.88};
    struct employee joshua;

    printf("Enter your name: \n");
    fgets(joshua.name, 50, stdin);

    printf("Enter your company ID: \n");
    fgets(joshua.company_ID, 20, stdin);

    printf("What's your salary?: \n");
    scanf("%.2f", &joshua.salary);


    printf("Name: %s, Company ID: %s, Salary: %.2f\n", chiaza.name, chiaza.company_ID, chiaza.salary);
    printf("Name: %s, Company ID: %s, Salary: %.2f", joshua.name, joshua.company_ID, joshua.salary);
    
    return 0;

}