#include<stdio.h>

int main()
{
    int num;

    printf("Enter an integer:");
    scanf("%d",&num);

    if(num >= 0)
    {
        printf("Checking Value\n");

            if(num == 0)
                printf("You entered %d\n",num);
            else if(num>0)

            {
                printf("You entered positive value\n");
                    {if(num%2 == 0)
                        printf("%d is an even",num);
                      else
                        printf("%d is an odd",num);
                    }
            }
    }
    else
        printf("You Enter negative value");

    return 0;
}
