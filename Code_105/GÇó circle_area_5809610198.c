#include<stdio.h>
#define PI 3.141592

float area(float r){

    float result;

    result = PI*r*r;

    return result;
}

int main(){

    float rad;

    printf("Enter radius:");
    scanf("%f",&rad);

    printf("Area:%.6f",area(rad));

    return 0;
}
