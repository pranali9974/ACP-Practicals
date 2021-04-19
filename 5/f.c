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

	printf("\n\n\n");

	for(int i = 0;i < n;i++)
		printf("%d\n", arr[i]);
}