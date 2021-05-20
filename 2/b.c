#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the size of the arrays.\n");
	scanf("%d", &n);
	int a[n], b[n], mul[n];

	printf("Enter the first elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		mul[i] = a[i];
	}

	printf("Enter the second elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &b[i]);
		mul[i] *= b[i];
	}

	printf("\n");
	for(int i = 0;i < n;i++){
		printf("%d\t", mul[i]);
		printf("\n");
	}
}

/*    Output
	* Enter the size of the arrays.
	> 5
	* Enter the first elements.
	> 2
	> 4
	> 6
	> 8
	> 10
	* Enter the second elements.
	> 1
	> 3
	> 5
	> 7
	> 9

	* 2
	* 12
	* 30
	* 56
	* 90
*/