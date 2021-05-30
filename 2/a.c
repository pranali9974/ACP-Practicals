//WAP to create and initialize integer pointer.

#include <stdio.h>

int main(void) {
	int num = 10;
	int *p = &num;

	printf("Number: %d\n", *p);
	printf("Pointer Location: %u\n", p);
}

/*    Output
	* Number: 10
	* Pointer Location: 6487572
*/