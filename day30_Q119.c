#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee e[100];
    int n = 0, i, choice;

    while(1) {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &e[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", e[n].name);

                printf("Enter Salary: ");
                scanf("%f", &e[n].salary);

                n++;
                break;

            case 2:
                printf("\nEmployee Records:\n");
                for(i = 0; i < n; i++) {
                    printf("\nID: %d", e[i].id);
                    printf("\nName: %s", e[i].name);
                    printf("\nSalary: %f\n", e[i].salary);
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}