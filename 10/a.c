#include <stdio.h>

int main(void) {
	int arr[3][3], max;

	printf("Enter the 9 elements.\n");

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++)
			scanf("%d", &arr[i][j]);

	max = arr[0][0];

	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++)
			if(max < arr[i][j])
				max = arr[i][j];

	printf("\nMaximum = %d", max);
}