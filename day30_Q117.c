#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    struct Student s[100];
    int n, i;
    printf("Enter Number of Students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n===== STUDENT RECORDS =====\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].rollNo);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
    return 0;
}