#include<stdio.h>

int main()
{
    int base, power ,cnt=1;
    long long int result = 1;

    printf("Enter base: ");
    scanf("%d",&base);

    printf("Enter power: ");
    scanf("%d",&power);

    while(cnt<=power)
    {
        result = base*result;

        cnt++;
    }
    printf("Result of: %d^%d is %lld\n",base,power,result);
    return 0;
}
