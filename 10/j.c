//WAP to find maximum from given 2-D array.

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

/*    Output
	* Enter the 9 elements.
	> 1
	> 2
	> 3
	> 7
	> 5
	> 9
	> 0
	> -19
	> 100
	
	* Maximum = 100
*/