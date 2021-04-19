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

	printf("\nSum\n");
	for(int i = 0;i < 3;i++) {
		for(int j = 0;j < 3;j++)
			printf("%d\t", sum[i][j]);
		printf("\n");
	}
}

