#include<stdio.h>

int main()
{
    int num1,num2,result;

    do
    {
     printf("Enter two integers:");
     scanf("%d %d",&num1,&num2);
     result = num1 + num2;
     if (num1!=0 && num2!=0)
     {

        printf("%d + %d = %d\n",num1,num2,result);
     }

    }while(num1!=0 && num2!=0);
    printf("Bye bye!!");

    return 0;
}
