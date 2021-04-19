#include <stdio.h>

int add(int a, int b);

int main(void) {
	int a, b, sum;
	printf("Enter the first number.\n");
	scanf("%d", &a);
	printf("Enter the first number.\n");
	scanf("%d", &b);
	sum = add(a, b);

	printf("Sum = %d", sum);
}

int add(int a, int b){
	int sum = a + b;
	return sum;
}