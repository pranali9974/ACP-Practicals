//WAP to merge two 1-D array in another 1-D array.

#include <stdio.h>

int main(void) {
	int n, m;
	printf("Enter the size of the first arrar.\n");
	scanf("%d", &n);
	printf("Enter the size of the second arrar.\n");
	scanf("%d", &m);
	int a[n], b[m], mer[n+m];

	printf("Enter the first elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		mer[i] = a[i];
	}

	printf("Enter the second elements.\n");
	for(int i = 0;i < m;i++) {
		scanf("%d", &b[i]);
		mer[i+n] = b[i];
	}

	printf("\n");
	for(int i = 0;i < n+m;i++)
		printf("%d\n", mer[i]);
}

/*    Output
	* Enter the size of the first arrar.
	> 3
	* Enter the size of the second arrar.
	> 3
	* Enter the first elements.
	> 1
	> 2
	> 3
	* Enter the second elements.
	> 4
	> 5
	> 6

	* 1
	* 2
	* 3
	* 4
	* 5
	* 6
	
*/