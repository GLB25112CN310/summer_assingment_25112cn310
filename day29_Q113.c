#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    float a, b, result;
    while(1){
        printf("\n==== MENU DRIVEN CALCULATOR ====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program\n");
            break;
        }
        if (choice < 1 || choice > 5) {
            printf("Error: Invalid choice! Please select an option between 1 and 5 \n");
            continue;
        }
        printf("Enter first number: ");
        scanf("%f",&a);
        printf("Enter second number: ");
        scanf("%f",&b);

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result: %f + %f = %f\n", a, b, result);
                break;
            case 2:
                result = a - b;
                printf("Result: %f - %f = %f\n",a,b, result);
                break;
            case 3:
                result = a * b;
                printf("Result: %f * %f = %f\n", a, b, result);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Division by zero is undefined.\n");
                } else {
                    result = a / b;
                    printf("Result: %f / %f = %f\n", a, b, result);
                }
                break;
        }
    } 

    return 0;
}