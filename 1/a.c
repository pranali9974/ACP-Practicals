/*
	* We declare a one dimentional array eith 10 veriables.
	* We take all the numbers as inputs from the user.
	* The sum of the numbers is saved in a variable.
	* We print the sum thereby declaring the sum of the array.
*/

#include <stdio.h>

int main(void) {
	//Declaring the array and variable sum
	int arr[10], sum = 0;
	
	//Accepting input values for the array
	printf("Enter 10 integer numbers.\n");
	for(int i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
		//Adding the previous sum with currently entered value
		sum += arr[i];
	}

	printf("sum = %d", sum);
}

/*
	* int arr[]    -->    Array to store the data
	* int sum      -->    To store the sum of the array
	* int i        -->    To Itterate through the loop
*/