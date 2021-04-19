/*
	* A one dimentional array with 10 veriables.
	* First 9 numbers are taked as inputs from the user.
	* The numbers after the insertion point are shiftd to right.
	* The number is inserted at the insertion point.
	* The array is printed.
*/

#include <stdio.h>

int main(void) {
	int p, n  = 10, arr[n];

	printf("Enter %d elements\n", n-1);
	for(int i = 0;i < n-1;i++)
		scanf("%d", &arr[i]);
 
	printf("Enter the position to insert in.\n");
	scanf("%d", &p);
 
	//shifting elements after p to right
 
	for (int i = n - 1;i = p; i--)
		arr[i+1] = arr[i];

	//Inserting at position p

	printf("Enter the value to insert\n");
	scanf("%d", &arr[p - 1]);

	printf("\n\n\n");

	//Printing the array
	
	for (int i = 0;i < n;i++)
		printf("%d\n", arr[i]);
}

/*
	* int n        -->    To store the size of the array
	* int arr[]    -->    Array to store the data
	* int p        -->    To store the position for insertion
	* int i        -->    To Itterate through the loop
*/