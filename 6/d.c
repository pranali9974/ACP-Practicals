//WAP to show the use of union in c.

#include <stdio.h>

union Numbers {
	int i, j, k;
};

int main(void) {
	union Numbers no;

	no.i = 10;
	no.j = 100;
	no.k = 1000;

	printf("i = %d\n", no.i);
	printf("j = %d\n", no.j);
	printf("k = %d\n", no.k);
}

/*    Output
	* i = 1000
	* j = 1000
	* k = 1000
*/