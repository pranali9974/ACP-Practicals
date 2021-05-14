//WAP to check a given element is exist or not from 1-D array of size 10.

/*
	* Initially, an array is accepted from the user.
	* The number to be found is accepted.
	* That array is cycles through until the desired number is found.
	* the position of the array is printed.
*/

#include <stdio.h>
int main()
{
	int n, num;
	printf("Enter the length of the One Dimentional Array\n");
	scanf("%d", &n);
	int arr[n];

	//Accepting the array
	printf("Enter the element(s)\n", n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	//Accepting the number to find in the array
	printf("Enter element to Search for.\n");
	scanf("%d", &num);

	//Itterating through the array untill the number is found.
	for (int i = 0; i < n; i++)
		if(arr[i] == num) {
			printf("%d found at position %d\n", num, i+1);
			return 0;
		}

	printf("The number was not found.");
}

/*    Variable List
	* int n				   -->		to store the size of the array
	* int arr[][]          -->		to store data of the fitst array
 	* int i                -->		to itterate through the outter loop
*/

/*    Output
	* Enter the length of the One Dimentional Array
	> 5
	* Enter the element(s)
	> 1
	> 7
	> -20
	> 0
	> 2
	* Enter element to Search for.
	> 0
	* 0 found at position 4
*/