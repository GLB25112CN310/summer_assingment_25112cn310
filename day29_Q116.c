#include <stdio.h>
struct Item {
    int id;
    char name[50];
    int quantity;
};
int main() {
    struct Item item[100];
    int n = 0, i, choice;
    while(1) {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf(" %[^\n]", item[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                n++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                printf("\nInventory Records:\n");
                for(i = 0; i < n; i++) {
                    printf("\nID: %d", item[i].id);
                    printf("\nName: %s", item[i].name);
                    printf("\nQuantity: %d\n", item[i].quantity);
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}