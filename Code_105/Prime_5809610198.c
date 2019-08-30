#include<stdio.h>
#define TRUE 1
#define FALSE 0

int isPrime(int n){

    int i;
    if(n==1)
        return FALSE;
    if(n==2)
        return TRUE;
    for(i=2;i<n;i++)
    {
            if(n%i == 0)
                return FALSE;
    }
    return TRUE;

}

int main(){

    int num;

    printf("Enter an integer : ");
    scanf("%d",&num);

    if(isPrime(num))
        {
            printf("%d is prime number",num);
        }
    else
        {
            printf("%d is not prime number",num);
        }


    return 0;
}
