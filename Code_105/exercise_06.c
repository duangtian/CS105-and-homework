#include <stdio.h>

int main()
{
    float pi = 3.141592;
    float radius, curriculum;

    printf("Enter circle radius: ");
    scanf("%f", &radius);

    curriculum = 2 * pi * radius;

    printf("Curriculum is %.4f\n", curriculum);




    return 0;
}

