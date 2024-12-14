#include <stdio.h>

int main() {
    float basic_salary, house_rent, conveyance_allowance, tax, total_salary;

    // Input the basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate house rent (20% of basic salary)
    house_rent = 0.20 * basic_salary;

    // Calculate conveyance allowance (10% of basic salary)
    conveyance_allowance = 0.10 * basic_salary;

    // Calculate tax deduction (5% of basic salary)
    tax = 0.05 * basic_salary;

    // Calculate total monthly salary
    total_salary = basic_salary + house_rent + conveyance_allowance - tax;

    // Display the total salary
    printf("The total monthly salary is: %.2f\n", total_salary);

    return 0;
}
