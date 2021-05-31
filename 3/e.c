//WAP function program to print binary equivalent of given number

#include <stdio.h>

void binary(int n);

int main(void) {
	int n;

	printf("Enter the number\n");
	scanf("%d",&n);

	binary(n);
}

void binary(int n) {
	int a[10], i;

	for(i = 0;n > 0;i++) {
		a[i] = n % 2;
		n = n / 2;
	}

	printf("Binary\n");
	for(i = i - 1;i >= 0;i--)
		printf("%d",a[i]);
}

/*    Output
    * Enter the number
    > 10
    * Binary
    * 1010
*/