#include <stdio.h>
int main()
{
	int n = 10, d, arr[n];

	printf("Enter the %d element(s)\n", n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	printf("Enter position to delete.\n");
	scanf("%d", &d);

	if (d >= n+1)
		printf("Deletion not possible.\n");
	else {
		for (int i = d - 1; i < n - 1; i++)
			arr[i] = arr[i+1];

		printf("\n\n\n");

		for (int i = 0; i < n - 1; i++)
			printf("%d\n", arr[i]);
	}
}