#include <stdio.h>

int main()
{
    int minutes, seconds;
    int input_sec;

    printf("Enter the number of seconds: ");
    scanf("%d", &input_sec);
    minutes = input_sec / 60;
    seconds = input_sec - (minutes * 60);
    printf("%d seconds = %d minutes, %d seconds\n", input_sec, minutes, seconds);



    return 0;
}
