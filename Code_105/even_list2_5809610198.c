#include<stdio.h>

int main()
{
    int num,inputNum;

    printf("Enter an integer:");
    scanf("%d",&inputNum);

    for(num=0;num<inputNum;num+=2)
        printf("%d ",num);


    return 0;
}
