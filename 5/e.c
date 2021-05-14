//WAP to perform sort operation in 1-D array of size 10.

/*
	* In this algoriths, the array is sequentially scanned many times.
	* During each itteration, the pairs of consiquetive elements are compared.
	* The compared elements are interchanges if necessary to bring the in the right order.
	* O(n^2)
	* Ω(n)
	* Θ(n^2)
*/

#include <stdio.h>

int main(void) {
	int n = 10, arr[n];

	printf("Enter the %d elements\n", n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	//Sorting
	for(int i = 0;i < n;i++)
		//This loop runnes the inner loop as many times as there are variables in the array
		for(int j = 0;j < n;j++)
		//This loop Bubbles the current largest number to the end
			if(arr[j] > arr[j+1]) { //Testing if the variables are in the right position
				//Swapping the variables of they are not in the right position
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}

	printf("\n");

	for(int i = 0;i < n;i++)
		printf("%d\n", arr[i]);
}

/**		Veriable List
	* int n     -->     to store size of the array 
	* int arr[] -->     the array to store the inserted values
	* int i     -->     to itterate through outter loops
	*int j      -->     to itterate through inner loops
*/

/*    Output
	* Enter the 10 elements
	> 1
	> 6
	> 8
	> 7
	> 2
	> 5
	> 4
	> 3
	> 9
	> 10

	* 1
	* 2
	* 3
	* 4
	* 5
	* 6
	* 7
	* 8
	* 9
	* 10
*/