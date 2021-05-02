/**
	* A 3 by 3, 2 dimentional array is declared.
	* a nested loop is run 3*3 times to accept all 9 numbers of the array.
	* a nested loop is run 3*3 times to printthe 9 numbers in the array.
*/

#include <stdio.h>

int main(void) {
	int n = 3, arr[n][n];

	printf("Enter the %d elements.\n", n*n);

	//Accepting the array
	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &arr[i][j]);

	//printing the array
	printf("\n\n\n");
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < n;j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}