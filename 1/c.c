//WAP to delete a given element from One-D array of size 10.

#include <stdio.h>

int main(void) {
	int n = 10, d, arr[n];

	printf("Enter the %d element(s)\n", n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	printf("Enter position to delete.\n");
	scanf("%d", &d);

	if (d >= n+1)
		printf("Deletion not possible.\n");
	else {

		for (int i = d - 1; i < n - 1; i++)
			arr[i] = arr[i+1];

		printf("\n");

		for (int i = 0; i < n - 1; i++)
			printf("%d\n", arr[i]);
	}
}

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