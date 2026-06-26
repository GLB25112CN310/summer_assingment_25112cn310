#include <stdio.h>
struct Book {
    int id;
    char title[50];
};
int main() {
    struct Book b[100];
    int n = 0, i, choice;

    while(1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", b[n].title);

                n++;
                break;

            case 2:
                printf("\nLibrary Books:\n");
                for(i = 0; i < n; i++) {
                    printf("ID: %d\tTitle: %s\n",
                           b[i].id, b[i].title);
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}