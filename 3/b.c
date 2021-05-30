//WAP to create a simple function for printing a star line.

#include <stdio.h>

int printStars(int n);

int main(void) {
	int n;
	printf("Enter the number of stars to print.\n");
	scanf("%d", &n);
	printStars(n);
}

int printStars(int n) {
	for(int i = 0;i < n;i++)
		printf("*");
}

/*    Output
	> 10
	**********
*/