//WAP to read and print Two-D array of 3X3 elements.

/*
	* A 3*3, 2 dimentional array is declared.
	* A nested loop is run 3*3 times to accept all 9 numbers of the array.
	* a nested loop is run 3*3 times to print the 9 numbers in the array.
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

/*    Variable List
	* int n				   -->		to store the size of the array
	* int arr[][]          -->		to store data of the fitst array
 	* int i                -->		to itterate through the outter loop
 	* int j                -->		to itterate through the inner loop
*/

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