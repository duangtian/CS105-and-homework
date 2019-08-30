#include<stdio.h>

int gcd(int a,int b)
{
    int i, ans;

    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        ans = i;

    }
    return ans;

}

int main()
{
    int num1,num2,god;

    printf("Enter a fraction:");
    scanf("%d/%d",&num1,&num2);

    printf("Irreducible fraction:");
    god =gcd(num1,num2);
    num1 = num1/god;
    num2 = num2/god;
    printf("%d/%d",num1,num2);

    return 0;
}
