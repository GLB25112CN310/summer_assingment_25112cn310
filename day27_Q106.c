#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct employee e;

    printf("enter employee ID :");
    scanf("%d",&e.id);

    printf("enter employee name :");
    scanf("%s",e.name);

    printf("enter employee salary :");
    scanf("%f",&e.salary);

    printf("\n--- Employee Details ---\n");
    printf("ID : %d\n", e.id);
    printf("Name : %s\n", e.name);
    printf("salary : %f\n", e.salary);
    return 0;
}