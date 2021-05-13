#include <stdio.h>

int areaTriangle(int, int);
int areaRectangle(int, int);
int areaCircle(int);

int main()
{
    int l, b, area, a1, a2;
    printf("Enter the length : ");
    scanf("%d", &l);

    printf("Enter the width : ");
    scanf("%d", &b);

    area = areaTriangle(l, b);
    area = areaRectangle(l, b);
    area = areaCircle(l);

    printf("The area of the triangle : %d\n", area);
    printf("The area of the rectangle : %d\n", a1);
    printf("The area of the rectangle : %d\n", a2);
}

int areaTriangle(int h, int b)
{
    return (int)(0.5 * h * b);
}
int areaRectangle(int l, int w)
{
    return l * w;
}
int areaCircle(int r)
{
    return (22/7)*r*r;
}