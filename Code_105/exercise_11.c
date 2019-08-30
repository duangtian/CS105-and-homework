#include <stdio.h>

int main()
{
    int hour;
    int charge;

    printf("How many hour: ");
    scanf("%d", &hour);

    if (hour <= 3)
    {
    charge = 50;
    printf("Total charge = %d\n", charge);
        // Calculate charge in case hour <= 3
    }
    else
    {
    charge = 50+hour%3*20;
    printf("Total charge = %d\n", charge);

        // Calculate charge in case hour > 3
    }


    return 0;
}
