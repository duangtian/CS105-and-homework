#include<stdio.h>

typedef struct point{
    int x, y;
} point;

void pointPrint(point p)
{
    printf("(%d,%d)",p.x,p.y);

}
int main()
{
    point p1 = {30,41};
    point p2;

    p2.x = 5;
    p2.y = 12;

    printf("Point 1 : ");
    pointPrint(p1);
    printf("\n");

    printf("Point 2 : ");
    pointPrint(p2);
    printf("\n");

    return 0;
}
