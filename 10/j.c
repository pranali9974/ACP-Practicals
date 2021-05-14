/*
	* A 3*3, two dimentional array is declared.
	* The array is itterated through to accept all numbers.
	* The array is again itterated and the biggest number is recorded.
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

/*    Variable List
	* int n				   -->		to store the size of the array
	* int arr[][]          -->		to store data of the fitst array
	* int max              -->      to store the largest number at any instance
 	* int i                -->		to itterate through the outter loop
 	* int j                -->		to itterate through the inner loop
*/

/*    Output
	* Enter the 9 elements.
	> 1
	> 2
	> 3
	> 7
	> 5
	> 9
	> 0
	> -19
	> 100

	* Maximum = 100
*/