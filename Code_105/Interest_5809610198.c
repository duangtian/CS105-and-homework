#include<stdio.h>

int main()
{
    int duration;
    double money, interest;

    printf("Enter amount of money and duration:");
    scanf("%lf %d",&money,&duration);

    if(duration<4)
    {
        interest = money*0.01;
    }
    else if(duration == 4)
    {
        interest = money*1.25/100;
    }
    else {
        interest= money*1.50/100;
    }


        printf("Interest: %.2lf baht",interest);

    return 0;
}
