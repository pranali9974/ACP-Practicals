//WAP to pass structure elements to function.

#include <stdio.h>

struct devices {
	int storage, ram, display;
};

void printThis(struct devices d);

int main(void) {
	struct devices d1;
	printf("Enter the display size.\n");
	scanf("%d", &d1.display);
	printf("Enter the RAM size.\n");
	scanf("%d", &d1.ram);
	printf("Enter the Storage space.\n");
	scanf("%d", &d1.storage);

	printf("\n");
	printThis(d1);
}

void printThis(struct devices d) {
	printf("Display size: %d inches\n", d.display);
	printf("RAM: %d GB\n", d.ram);
	printf("Storage space: %d GB\n", d.storage);
}

/*    Output
	* Enter the display size.
	> 17
	* Enter the RAM size.
	> 64
	* Enter the Storage space.
	> 8000
	* 
	* Display size: 17 inches
	* RAM: 64 GB
	* Storage space: 8000 GB
*/