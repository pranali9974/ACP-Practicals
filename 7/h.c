#include <stdio.h>
int main()
{
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
			if(arr[i] == num)
				printf("%d found at position %d\n", num, i+1);
}