//WAP to insert an element in 2-D array at specified location of size.

#include <stdio.h>

int main(void) {
	int n = 3, nn = n*n, arr[n][n], temp[nn], pp[2], p;

	printf("Enter the %d numbers.\n", nn-1);

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++) {
			if(i == n-1 && j == n-1) break;
			scanf("%d", &arr[i][j]);
			temp[(i*n)+j] = arr[i][j];
		}

	printf("Enter the position to insert.\n");
	printf("First: ");
	scanf("%d", &pp[0]);
	printf("Second: ");
	scanf("%d", &pp[1]);
	p = pp[0] * n + pp[1] + 1;

	int x = nn;
	for(int i = x;x >= p;x--)
		temp[x] = temp[x-1];

	printf("Enter the value to insert\n");
	scanf("%d", &temp[p - 1]);

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			arr[i][j] = temp[(i*n)+j];
	arr[n][n] = temp[nn];

	for(int i = 0;i < n;i++) {
		for(int j = 0;j < n;j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

/*    Output
	* Enter the 8 numbers.
	> 1
	> 2
	> 3
	> 5
	> 6
	> 7
	> 8
	> 9
	* Enter the position to insert.
	> First: 1
	> Second: 0
	* Enter the value to insert
	> 4
	* 1       2       3
	* 4       5       6
	* 7       8       9
*/