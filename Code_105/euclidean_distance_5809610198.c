#include<stdio.h>
#include<math.h>

typedef struct point{
    int x,y;
} point;

double distance(point p1, point p2)
{

    return pow(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2),1/2.0);


}

int main()
{
    point p1, p2;

    printf("Enter first point:");
    scanf("%d,%d",&p1.x,&p1.y);
    printf("Enter second point:");
    scanf("%d,%d",&p2.x,&p2.y);

    printf("Distance is %.4lf unit",distance(p1,p2));

    return 0;
}
