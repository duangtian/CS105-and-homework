#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter two integers : ");
    scanf("%d %d", &x, &y);




    if (x > y)
    {
        printf("%d %d\n", x, y);

    }
    else
    {
        printf("%d %d\n", y, x);
    }

    return 0;
}