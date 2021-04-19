#include <stdio.h>

int main(void) {
	int p, n  = 10, arr[n];

	printf("Enter %d elements\n", n-1);
	for(int i = 0;i < n-1;i++)
		scanf("%d", &arr[i]);
 
	printf("Enter the position to insert in.\n");
	scanf("%d", &p);
 
	for (int i = n - 1;i = p; i--)
		arr[i+1] = arr[i];

	printf("Enter the value to insert\n");
	scanf("%d", &arr[p - 1]);

	printf("\n\n\n");
	
	for (int i = 0;i < n;i++)
		printf("%d\n", arr[i]);
}