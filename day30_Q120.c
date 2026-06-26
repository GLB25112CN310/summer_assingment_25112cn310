#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    struct Student s[100];
    int n = 0, i, choice, searchRoll;

    while(1) {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &s[n].rollNo);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                printf("\n===== STUDENT LIST =====\n");
                for(i = 0; i < n; i++) {
                    printf("\nRoll No: %d", s[i].rollNo);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %f\n", s[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll No to Search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++) {
                    if(s[i].rollNo == searchRoll) {
                        printf("\nStudent Found!");
                        printf("\nName: %s", s[i].name);
                        printf("\nMarks: %f\n", s[i].marks);
                        break;
                    }
                }

                if(i == n)
                    printf("Student Not Found!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}