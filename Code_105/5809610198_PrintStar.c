#include<stdio.h>
//5809610198

void printStar(int n){

    int i;
    for(i=1;i<=n;i++)
    {
        printf("*");
    }

}

int main(){

    int num;
    scanf("%d",&num);

    printStar(num);

    return 0;
}
