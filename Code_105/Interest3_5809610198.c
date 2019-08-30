#include<stdio.h>

int main()
{
    float money, interest;

    printf("Enter amount of money:");
    scanf("%f",&money);

    if(money>=300000)
    {
        interest = money*2.1/100;
    }
    else if(money>=100000)
    {
        interest = money*1.6/100;
    }
    else interest = money*1/100;

    printf("Interest: %.2f",interest);

    return 0;
}
