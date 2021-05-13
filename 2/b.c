//WAP to multiply corresponding elements of Two, One-D array and store them into third one-d array.

/*
 	* Initially, the first array is accepted.
	* The first array is copied to the third array.
	* The second array is accepted.
	* The second array's data is multiplies to the third array.
*/

#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the size of the arrays.\n");
	scanf("%d", &n);
	int a[n], b[n], mul[n];

	//Accepting first array and coping it to third array
	printf("Enter the first elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		mul[i] = a[i];
	}

	//Accepting second array and multiplying it to the third array
	printf("Enter the second elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &b[i]);
		mul[i] *= b[i];
	}

	printf("\n");
	for(int i = 0;i < n;i++){
		printf("%d\t", mul[i]);
		printf("\n");
	}
}

/*
	* int n 			 	-->     to store the size of the arrays
	* int a[]       	    -->		to store data of the fitst array
	* int b[]               -->		to store data of the second array
	* int mul[]  	        -->		to store sum of the fitst and second array
 	* int i                 -->		to itterate through loops
*/

/* Output
	* Enter the size of the arrays.
	> 5
	* Enter the first elements.
	> 2
	> 4
	> 6
	> 8
	> 10
	* Enter the second elements.
	> 1
	> 3
	> 5
	> 7
	> 9

	* 2
	* 12
	* 30
	* 56
	* 90
*/