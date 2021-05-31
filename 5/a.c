//WAP to find area of circle using macro.

#include <stdio.h>

#define area(r) (22/7*r*r)

int main(void) {
	int r, a;

	printf("Enter the radius.\n");
	scanf("%d", &r);

	a = area(r);

	printf("The area of the circle is %d.\n", a);
}