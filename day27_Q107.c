#include <stdio.h>
int main()
{
    float basic, hra, da, grossSalary;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    hra = basic * 0.20;
    da = basic * 0.10;
    grossSalary = basic + hra + da;

    printf("\nBasic Salary = %f\n", basic);
    printf("HRA = %f\n", hra);
    printf("DA = %f\n", da);
    printf("Gross Salary = %f\n", grossSalary);
    return 0;
}