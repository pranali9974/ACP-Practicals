//WAP to print SUM of any 10 numbers using One-Dimentional array.

/*
	* A one dimentional array with 10 veriables is declared.
	* All the numbers are taken as inputs from the user.
	* The sum of the numbers is saved in a variable.
*/

#include <stdio.h>

int main(void) {
	//Declaring the array and variable sum
	int n = 10, arr[n], sum = 0;
	
	//Accepting input values for the array
	printf("Enter 10 integers.\n");
	for(int i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
		//Adding the previous sum with currently entered value
		sum += arr[i];
	}

	printf("sum = %d", sum);
}

/*
	* int arr[]    -->    Array to store the entered numbers
	* int sum      -->    To store the sum of the array
	* int i        -->    To Itterate through the loop 
	* int n        -->    To store the size of the array
*/

/* Output
	* Enter 10 integers.
	> 1
	> 2
	> 3
	> 4
	> 5
	> 6
	> 7
	> 8
	> 9
	> 10
	* sum = 55
*/