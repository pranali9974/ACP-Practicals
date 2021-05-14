//WAP to delete a given element from One-D array of size 10.

/*
	* An array is initialised.
	* The position to be deleted is entered by the user.
	* Every element of the array after the element to be deleted is shifted to left by 1 position.
	* The variable containing the array size is reduces by 1 to componsate for the deletion of the variable.
*/

#include <stdio.h>

int main() {
	int n = 10, d, arr[n];

	printf("Enter the %d element(s)\n", n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	//Accepting element position to delete
	printf("Enter position to delete.\n");
	scanf("%d", &d);

	//Testing if deletion i possible
	if (d >= n+1)
		printf("Deletion not possible.\n");
	else {

		//Shifting elements to their left therby effectivly deleting the desired element
		for (int i = d - 1; i < n - 1; i++)
			arr[i] = arr[i+1];

		printf("\n");

		for (int i = 0; i < n - 1; i++)
			printf("%d\n", arr[i]);
	}
}

/*    Veriable List
	* int n     -->     to store size of the array 
	* int arr[] -->     the array to store the inserted values
	* int i     -->     to itterate through the loops
	* int d     -->     array position to be deleted
*/

/*    Output
	> Enter the 10 element(s)
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
	> Enter position to delete.
	* 5 

	> 1
	> 2
	> 3
	> 4
	> 6
	> 7
	> 8
	> 9
	> 10
*/

