//WAP to add two matrix of size 2-D array.

#include <stdio.h>

int main(void) {
	int arr[3][3], arr0[3][3], sum[3][3];

	printf("Enter the first 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++) {
			scanf("%d", &arr[i][j]);
			sum[i][j] = arr[i][j];
		}

	printf("Enter the second 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++) {
			scanf("%d", &arr0[i][j]);
			sum[i][j] += arr0[i][j];
		}

	printf("\n");
	for(int i = 0;i < 3;i++) {
		for(int j = 0;j < 3;j++)
			printf("%d\t", sum[i][j]);
		printf("\n");
	}
}

/*    Output
	* Enter the first 9 elements.
	> 1
	> 2
	> 3
	> 4
	> 5
	> 6
	> 7
	> 8
	> 9
	* Enter the second 9 elements.
	> 9
	> 8
	> 7
	> 6
	> 5
	> 4
	> 3
	> 2
	> 1

	* 10      10      10
	* 10      10      10
	* 10      10      10
*/