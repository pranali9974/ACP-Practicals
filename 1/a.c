#include <stdio.h>

int main(void) {
	int arr[10], sum = 0;
	
	printf("Enter 10 integer numbers.\n");
	for(int i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("sum = %d", sum);
}