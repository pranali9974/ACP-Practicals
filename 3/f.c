//WAP to find maximum element from one -d array using User defined function.

#include <stdio.h>

int largest(int arr[], int n);

int main(void) {
	int arr[] = {10, 324, 45, 90, 9808}, n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Largest in given array is %d", largest(arr, n));
}

int largest(int arr[], int n) {
	int i, max = arr[0];

	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

/*    Output
    * Largest in given array is 9808
*/