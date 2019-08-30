#include<stdio.h>

typedef struct person{
    char name[50];
    int age , salary;
} person;

int main()
{
    person person1;

    printf("Enter your name:");
    scanf("%s",person1.name);
    printf("Enter your age:");
    scanf("%d",&person1.age);
    printf("Enter your salary:");
    scanf("%d",&person1.salary);

    printf("=========================\n");

    printf("%s\n",person1.name);
    printf("Age : %d , Salary : %d\n",person1.age,person1.salary);

    printf("=========================");
    return 0;
}
