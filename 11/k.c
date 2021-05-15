//WAP to add two matrix of size 2-D array.

/*
 	* Initially, the first array is accepted and also copied to the third array.
	* Then the second array is accepted.
	* This second array data is now added to the third array.
*/

#include <stdio.h>

int main(void) {
	int arr[3][3], arr0[3][3], sum[3][3];

	//Accepting first array and adding it to the third array
	printf("Enter the first 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++) {
			scanf("%d", &arr[i][j]);
			sum[i][j] = arr[i][j];
		}

	//Accepting second array and adding it to the third array
	printf("Enter the second 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++) {
			scanf("%d", &arr0[i][j]);
			sum[i][j] += arr0[i][j];
		}

	printf("\n");
	for(int i = 0;i < 3;i++) {
		for(int j = 0;j < 3;j++)
			printf("%d\t", sum[i][j]);
		printf("\n");
	}
}



/*    Variable List
 	* int i              -->		to itterate through the outter loop
	* int j              -->		to itterate through the inner loop
	* int a[][]          -->		to store data of the fitst array
	* int b[][]          -->		to store data of the second array
	* int sum[][]        -->		to store sum of the fitst and second array
*/

/*    Output
	* Enter the first 9 elements.
	> 1
	> 2
	> 3
	> 4
	> 5
	> 6
	> 7
	> 8
	> 9
	* Enter the second 9 elements.
	> 9
	> 8
	> 7
	> 6
	> 5
	> 4
	> 3
	> 2
	> 1

	* 10      10      10
	* 10      10      10
	* 10      10      10
*/