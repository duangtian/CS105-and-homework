#include<stdio.h>

typedef struct person{
    char name[50];
    int age , salary;
} person;

int main()
{
    person studen, studen2;

    printf("Enter your name:");
    scanf("%s",studen.name);
    printf("Enter your age:");
    scanf("%d",&studen.age);

    printf("Enter your friend's name:");
    scanf("%s",studen2.name);
    printf("Enter your friend's age:");
    scanf("%d",&studen2.age);

    if(studen.age<studen2.age)
        printf("%s is older than %s",studen2.name,studen.name);
    else if(studen2.age<studen.age)
        printf("%s is older than %s",studen.name,studen2.name);
    else
        printf("%s and %s have the same age",studen.name,studen2.name);

    return 0;
}
