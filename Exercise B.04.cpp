//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    float salary;
	float tax = 0;

    printf("Enter monthly salary in ALL: ");
    scanf("%f", &salary);

    if (salary <= 40000) {
        tax = 0;
    } 
    else if (salary <= 50000) {
        float taxable = salary - 40000;
        if (taxable <= 30000) {
            tax = 0;
        } else {
            float over30k = taxable - 30000;
            tax = over30k * 0.5 * 0.13; 
        }
    }
    else if (salary <= 200000) {
        float taxable = salary - 30000;
        tax = taxable * 0.13;
    } 
    else { 
        tax = 22100 + (salary - 200000) * 0.23;
    }

    printf("Tax amount: %f ALL\n", tax);
    printf("Net salary: %f ALL\n", salary - tax);

    return 0;
}

