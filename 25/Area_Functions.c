<<<<<<< HEAD
//triangle, rectangle, circle

#include <stdio.h>

// int triangle(int b, int h);
// int rectangle(int l, int b);
// float circle(int r);






float triangle(int b, int h) {
	float area;
	area = 0.5 * b * h;
	return area;
}

float rectangle(int l, int b) {
	float area;
	area = l * b;
	return area;
}

float circle(int r) {
	float area;
	area = 22/7 * r * r;
	return area;
}







int main(void) {
	printf("Enter 1 for triangle.\n");
	printf("Enter 2 for rectangle.\n");
	printf("Enter 3 for circle.\n");

	int cv;
	float a, b;

	scanf("%d", &cv);

	switch(cv) {
		case 1:
			printf("Enter the base.\n");
			scanf("%f" , &a);
			printf("Enter the height.\n");
			scanf("%f" , &a);
			printf("The area of the triangle is %f", triangle(a, b));
		break;

		case 2:
			printf("Enter the length.\n");
			scanf("%f" ,&a);
			printf("Enter the breadth.\n");
			scanf("%f" ,&a);
			printf("The area of the rectangle is %f", rectangle(a, b));
		break;

		case 3:
			printf("Enter the radius.\n");
			scanf("%f" ,&a);
			printf("The area of the circle is %f", circle(a));
		break;
		
		default:
			printf("Error.\nPlease try again.");
			main();
		break;
	}
=======
//triangle, rectangle, circle

#include <stdio.h>

int triangle(int b, int h);
int rectangle(int l, int b);
int circe(int r);

int main(void) {
	printf("Enter 1 for triangle.\n");
	printf("Enter 2 for rectangle.\n");
	printf("Enter 3 for circle.\n");

	int cv;

	scanf("%d", &cv);

	switch(cv) {
		case 1:
			
		break;
	}
>>>>>>> 5c170a337c3a47b3ee8d062f8bf6353b19b04cd0
}