//WAP to perform sort operation in 1-D array of size 10.

#include <stdio.h>

int main(void) {
	int n = 10, arr[n];

	printf("Enter the %d elements\n", n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			if(arr[j] > arr[j+1]) {
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}

	printf("\n");

	for(int i = 0;i < n;i++)
		printf("%d\n", arr[i]);
}

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