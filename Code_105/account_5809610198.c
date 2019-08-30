#include<stdio.h>

typedef struct account
{
    char firstname[50];
    char lastname[50];
    float balance;
} account;

void addInterest(account *acc)
{
    acc->balance += (acc->balance * 0.015);
}
int main()
{
    account person;
    int i;

    printf("Enter firstname:");
    scanf("%s",person.firstname);
    printf("Enter lastname:");
    scanf("%s",person.lastname);
    printf("Enter current balance:");
    scanf("%f",&person.balance);

    printf("==============================\n");

    printf("%s %s\n",person.firstname,person.lastname);

    printf("==============================\n");

    for(i=1;i<=3;i++)
    {
    addInterest(&person);
    printf("Balance after %d month : %.2f\n",i,person.balance);
    }
    return 0;
}
