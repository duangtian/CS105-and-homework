#include<stdio.h>

int main()
{
    int inputNum, count = 1 ,result = 0;

    printf("Enter an integer number: ");
    scanf("%d",&inputNum);

    printf("Summation of ");

    while(count <= inputNum)
        {
        printf("%d, ",count);
        result = result+count;
        count++;
        }
    printf(" is %d\n",result);

    return 0;
}
