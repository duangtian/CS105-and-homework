#include <stdio.h>

int main()
{
    float tmp_c, tmp_f, tmp_k;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &tmp_c);

    tmp_f = tmp_c * 1.8 + 32;
    tmp_k = tmp_c + 273.15;

    printf("%.3f Celsius = %.3f Fahrenheit\n", tmp_c, tmp_f);
    printf("%.3f Celsius = %.3f Kelvin\n", tmp_c, tmp_k);





    return 0;
}

