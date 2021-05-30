//WAP function program to print binary equivalent of given number

#include <stdio.h>
int main() {
	int a[10],n,i;

	printf("Enter the number\n");
	scanf("%d",&n);

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