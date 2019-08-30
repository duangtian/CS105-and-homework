#include<stdio.h>

typedef struct point{
    int x, y;
} point;

point addPoint(point p1, point p2)
{
    point pResult;

    pResult.x = p1.x + p2.x;
    pResult.y = p1.y + p2.y;

    return pResult;
}
int main()
{
    point p1, p2;

    printf("Enter first point:");
    scanf("%d,%d",&p1.x,&p1.y);
    printf("Enter second point:");
    scanf("%d,%d",&p2.x,&p2.y);

    printf("(%d,%d) + (%d,%d) = (%d,%d)",p1.x,p1.y,p2.x,p2.y,addPoint(p1,p2));

    return 0;
}
