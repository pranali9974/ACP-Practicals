#include <stdio.h>

int main(void) {
	int arr[3][3];

	printf("Enter the 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++)
			scanf("%d", &arr[i][j]);

	for(int i = 0;i < 3;i++) {
		for(int j = 0;j < 3;j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}