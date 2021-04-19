#include <stdio.h>

void fibbinacci(int n);

int main(void) {
	int n;
	printf("Enter the number of itterations to go.\n");
	scanf("%d", &n);
	fibbinacci(n);
}

void fibbinacci(int n) {
	int a = 0, b = 1;
	for(int i = 0;i < n;i++) {
		printf("%d\t%d\t", a, b);
		b = a + b;
		a = b - a;
		b = a + b;
		a = b - a;
	}
}