//WAP to find area of triangle, rectangle and circle using User defined function

#include <stdio.h>

int areaTriangle(int, int);
int areaRectangle(int, int);
int areaCircle(int);

int main(void) {
    int l, b, area, cv;

    printf("Enter 1 for triangle.\n");
    printf("Enter 2 for rectangle.\n");
    printf("Enter 3 for circle.\n");

    scanf("%d", &cv);

    switch(cv) {
        case 1:
            printf("Enter the height.\n");
            scanf("%d", &l);
            printf("Enter the base.\n");
            scanf("%d", &b);
            printf("The area of the triangle : %d\n", areaTriangle(l, b));
        break;

        case 2:
            printf("Enter the length : ");
            scanf("%d", &l);
            printf("Enter the width : ");
            scanf("%d", &b);
            printf("The area of the rectangle : %d\n", areaRectangle(l, b));
        break;
        
        case 3:
            printf("Enter the radius : ");
            scanf("%d", &l);
            printf("The area of the circle : %d\n", areaCircle(l));
        break;

        default:
            printf("Please try again.....\n");
            main();
    }
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

/*    Output 1
    * Enter 1 for triangle. 
    * Enter 2 for rectangle.
    * Enter 3 for circle.   
    > 1
    * Enter the height.
    > 10
    * Enter the base.
    > 20
    * The area of the triangle : 100
*/
/*    Output 2
    * Enter 1 for triangle. 
    * Enter 2 for rectangle.
    * Enter 3 for circle.   
    > 2
    * Enter the length.
    > 10
    * Enter the width.
    > 20
    * The area of the rectangle : 200
*/
/*    Output 3
    * Enter 1 for triangle. 
    * Enter 2 for rectangle.
    * Enter 3 for circle.   
    > 3
    * Enter the radius.
    > 7
    * The area of the circle : 147
*/