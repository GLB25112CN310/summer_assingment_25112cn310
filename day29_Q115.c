#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int choice;
    printf("Enter First String: ");
    scanf(" %[^\n]", str1);
    while(1) {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}