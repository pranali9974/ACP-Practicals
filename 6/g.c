/*
 	* Initially, the first array is accepted
	* The first array is copied to the mer array.
	* The second array is accepted.
	* The second array's data is appended to the mer array.
	* the mer array is printed
*/

#include <stdio.h>

int main(void) {
	int n, m;
	printf("Enter the size of the first arrar.\n");
	scanf("%d", &n);
	printf("Enter the size of the second arrar.\n");
	scanf("%d", &m);
	int a[n], b[m], mer[n+m];

	//Accepting first array and coping it to mer array

	printf("Enter the first elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		mer[i] = a[i];
	}

	//Accepting second array and appending it to the mer array

	printf("Enter the second elements.\n");
	for(int i = 0;i < m;i++) {
		scanf("%d", &b[i]);
		mer[i+n] = b[i];
	}

	printf("\n\n\n");
	for(int i = 0;i < n+m;i++)
		printf("%d\n", mer[i]);
}

/*
	* int n 			 	-->     to store the size of the first array
	* int m 			 	-->     to store the size of the first array
	* int a[]       	    -->		to store data of the fitst array
	* int b[]               -->		to store data of the second array
	* int mer[]  	        -->		to store first and second array
 	* int i                 -->		to itterate through loops
*/