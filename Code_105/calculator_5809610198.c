#include<stdio.h>

int main()
{
    double a,b,d;
    char c;
        printf("Enter Calculation:");
        scanf("%lf %c %lf",&a,&c,&b);

        switch(c)
        {
        case '+' : {d=a+b; printf("%.2lf + %.2lf = %.2lf",a,b,d);}break;
        case '-' : {d=a-b; printf("%.2lf - %.2lf = %.2lf",a,b,d);}break;
        case '*' : {d=a*b; printf("%.2lf * %.2lf = %.2lf",a,b,d);}break;
        case '/' : {d=a/b; printf("%.2lf / %.2lf = %.2lf",a,b,d);}break;
    default : printf("Only \"+\", \"-\", \"*\", and \"/\"");
        }
    return 0;
}
