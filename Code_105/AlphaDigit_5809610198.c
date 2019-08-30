#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    int i;
    char text[20000];

    printf("Enter text:");
    scanf("%s",text); //gets(text);

    int len = strlen(text);

    printf("ALPHABET:");
    for(i=0;i<len;i++)
    {
        if(isalpha(text[i]))
        {
         printf("%c",text[i]);
        }
    }
    printf("\nDECIMAL DIGIT:");
    for(i=0;i<len;i++)
    {
        if(isdigit(text[i]))
        {
         printf("%c",text[i]);
        }
    }
    return 0;
}
