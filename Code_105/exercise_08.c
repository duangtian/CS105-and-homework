#include <stdio.h>

int main()
{
    int age_year;
    int age_month;

    printf("Enter your age: ");
    scanf("%d", &age_year);

    age_month = age_year * 12;

    printf("Your age in months is %d.", age_month);

    return 0;
}

