//WAP to sort array elements and print them using pointer.

#include <stdio.h>

void sort(int n, int* ptr);

int main(void)
{
	int n;
	printf("Enter the size of the array.\n");
	scanf("%d", &n);
	int arr[n];

	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	sort(n, arr);

	return 0;
}

void sort(int n, int* ptr)
{
	int t;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}

	printf("Sorted array\n");

	for (int i = 0; i < n; i++)
		printf("%d\n", *(ptr + i));
}

/*    Output
	* Enter the size of the array.
	> 5
	> 1
	> 4
	> 2
	> 3
	> 5
	* Sorted array
	* 1
	* 2
	* 3
	* 4
	* 5
*/