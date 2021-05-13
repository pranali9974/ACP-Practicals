/*
 	* Initially, the first array is accepted and also copied to the sum array.
	* Then the second array is accepted.
	* This second array data is also added to the sum array.
	* After inserting is complete, we print the array for checking.
*/

#include <stdio.h>

int main(void) {
	int arr[3][3], arr0[3][3], sum[3][3];

	//Accepting first array and adding it to the sum array

	printf("Enter the first 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++) {
			scanf("%d", &arr[i][j]);
			sum[i][j] = arr[i][j];
		}

	//Accepting second array and adding it to the sum array

	printf("Enter the second 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++) {
			scanf("%d", &arr0[i][j]);
			sum[i][j] += arr0[i][j];
		}

	printf("\n\n\n\nSum\n");
	for(int i = 0;i < 3;i++) {
		for(int j = 0;j < 3;j++)
			printf("%d\t", sum[i][j]);
		printf("\n");
	}
}

/*
 	* int i              -->		to itterate through the outter loop
	* int j              -->		to itterate through the inner loop
	* int a[][]          -->		to store data of the fitst array
	* int b[][]          -->		to store data of the second array
	* int sum[][]        -->		to store sum of the fitst and second array
*/