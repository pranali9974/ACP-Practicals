#include <stdio.h>

int main(void) {

	int n = 3, nn = n*n, arr[n][n], temp[nn], pp[2], p;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++){
			if(i == n-1 && j == n-1)
				continue;
			scanf("%d", &arr[i][j]);
			temp[(i*n)+j] = arr[i][j];
		}

	//printing the 2 D array
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < n;j++){
			if(i == n-1 && j == n-1)
				continue;
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	//accepting position
	printf("Enter the position(x and y axis.)");
	for(int i = 0;i < 2;i++) scanf("%d", &pp[i]);

	// insert(p, n, arr);

	
	p = pp[0] * nn + pp[1];

	//shifting elements after p to right
	for(int i = nn;nn >= p;nn--) temp[nn] = temp[nn-1];

	//Inserting at position p
	printf("Enter the value to insert\n");
	scanf("%d", &temp[p - 1]);

	

	printf("\n");

	//printing the array again
	for (int i = 0;i < 3;i++) {
		for(int j = 0;j < 3;j++)
			printf("%d\t", temp[i*n+j]);
			printf("\n");
	}
}

// void insert(int pp[], int n, int arr[]) {

// 	int p = pp[0] * n + pp[1];
// 	printf("Enter %d elements\n", n-1);
// 	for(int i = 0;i < n-1;i++)
// 		scanf("%d", &arr[i]);
 
// 	printf("Enter the position to insert in.\n");
// 	scanf("%d", &p);
 
// 	//shifting elements after p to right
// 	for(int i = n;n >= p;n--)
// 		arr[n] = arr[n-1];

// 	//Inserting at position p
// 	printf("Enter the value to insert\n");
// 	scanf("%d", &arr[p - 1]);

// 	printf("\n");

// 	for (int i = 0;i < 10;i++)
// 		printf("%d\n", arr[i]);
// }