#include <stdio.h>
int main()
{
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 5 Subjects:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\n----- MARKSHEET -----\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 60)
        printf("Division: First");
    else if(percentage >= 45)
        printf("Division: Second");
    else if(percentage >= 33)
        printf("Division: Third");
    else
        printf("Result: Fail");

    return 0;
}