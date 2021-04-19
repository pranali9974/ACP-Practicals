#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the size of the arrars.\n");
	scanf("%d", &n);
	int a[n], b[n], mul[n];

	printf("Enter the first elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		mul[i] = a[i];
	}

	printf("Enter the second elements.\n");
	for(int i = 0;i < n;i++) {
		scanf("%d", &b[i]);
		mul[i] *= b[i];
	}

	printf("\n\n\n");
	for(int i = 0;i < n;i++){
		printf("%d\t", mul[i]);
		printf("\n");
	}
}