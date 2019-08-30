#include<stdio.h>

int main()
{
    int time;

    printf("Enter cooking time (minute) : ");
    scanf("%d",&time);


    if(time==3) printf("Just 3 minutes");
    else if (time>3 ) printf("It's been too long time");
    else printf("Cooking time too short");

    return 0;
}
