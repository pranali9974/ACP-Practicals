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