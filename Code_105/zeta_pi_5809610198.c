#include<stdio.h>
#include<math.h>

int main(){

    int i;
    double sum=0;

    for(i=1;i<=100;i++)
    {
      sum = sum+(1/pow(i,4));
    }
    sum = sum*90.0;
    sum = pow(sum,1/4.0);

    printf("Approximation of PI is %.10lf",sum);

    return 0;
}
