//WAP to check a given element is exist or not from 1-D array of size 10.

#include <stdio.h>
int main(void) {
	int n, num;
	printf("Enter the length of the One Dimentional Array\n");
	scanf("%d", &n);
	int arr[n];

	printf("Enter the element(s)\n", n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	printf("Enter element to Search for.\n");
	scanf("%d", &num);

	for (int i = 0; i < n; i++)
		if(arr[i] == num) {
			printf("%d found at position %d\n", num, i+1);
			return 0;
		}

	printf("The number was not found.");
}

/*    Output
	* Enter the length of the One Dimentional Array
	> 5
	* Enter the element(s)
	> 1
	> 7
	> -20
	> 0
	> 2
	* Enter element to Search for.
	> 0
	* 0 found at position 4
*/