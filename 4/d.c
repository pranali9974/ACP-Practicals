//WAP to insert an element in 1-D array at specified location of size 10.

#include <stdio.h>

int main(void) {
	int p, n  = 10, arr[n];

	printf("Enter %d elements\n", n-1);
	for(int i = 0;i < n-1;i++)
		scanf("%d", &arr[i]);
 
	printf("Enter the position to insert in.\n");
	scanf("%d", &p);
 
	for(int i = n;n >= p;n--)
		arr[n] = arr[n-1];

	printf("Enter the value to insert\n");
	scanf("%d", &arr[p - 1]);

	printf("\n");

	for (int i = 0;i < 10;i++)
		printf("%d\n", arr[i]);
}

/*    Output
	* Eter 9 elements
	> 1
	> 2
	> 3
	> 5
	> 6
	> 7
	> 8
	> 9
	> 10
	* Enter the position to insert in.
	> 4
	* Enter the value to insert
	> 4
	
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