//WAP to read and print Two-D array of 3X3 elements.

#include <stdio.h>

int main(void) {
	int n = 3, arr[n][n];

	printf("Enter the %d elements.\n", n*n);

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &arr[i][j]);

	printf("\n\n\n");
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < n;j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}

/*    Output
	* Enter the 9 elements.
	> 1
	> 2
	> 3
	> 4
	> 5
	> 6
	> 7
	> 8
	> 9

	* 1       2       3
	* 4       5       6
	* 7       8       9
*/