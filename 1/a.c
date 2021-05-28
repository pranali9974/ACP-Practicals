//WAP to print SUM of any 10 numbers using One-D array.

#include <stdio.h>

int main(void) {
	int n = 10, arr[n], sum = 0;
	
	printf("Enter 10 integers.\n");
	for(int i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("sum = %d", sum);
}

/*    Output
	* Enter 10 integers.
	> 1
	> 2
	> 3
	> 4
	> 5
	> 6
	> 7
	> 8
	> 9
	> 10
	* sum = 55
*/