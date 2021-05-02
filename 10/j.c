/*
	* a 3 by 3, two dimentional array is declared.
	* the array is itterated through to accept all numbers.
	* The array is again itterated and the biggest number is rrecorded.
*/

#include <stdio.h>

int main(void) {
	int arr[3][3], max;

	printf("Enter the 9 elements.\n");

	//Accepting the array
	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++)
			scanf("%d", &arr[i][j]);

	max = arr[0][0];

	//Finding the largest number
	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++)
			if(max < arr[i][j])
				max = arr[i][j];

	printf("\nMaximum = %d", max);
}