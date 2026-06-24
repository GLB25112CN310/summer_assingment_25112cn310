#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char name[50];
    char author[50];
};
int main() {
    struct Book b[100];
    int n = 0, choice, i, searchId;
    while (1) {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Name: ");
                scanf(" %s", b[n].name);

                printf("Enter Author Name: ");
                scanf(" %s", b[n].author);
                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("\nBook Records:\n");
                for (i = 0; i < n; i++) {
                    printf("\nBook ID: %d", b[i].id);
                    printf("\nBook Name: %s", b[i].name);
                    printf("\nAuthor: %s\n", b[i].author);
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (b[i].id == searchId) {
                        printf("\nBook Found!");
                        printf("\nBook Name: %s", b[i].name);
                        printf("\nAuthor: %s\n", b[i].author);
                        break;
                    }
                }
                if (i == n)
                    printf("Book Not Found!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}