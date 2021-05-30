//WAP to swap values of two variable using pointers.

#include <stdio.h>
 
int main(void) {
	int x, y, *a, *b, temp;
 
	printf("Enter x\n");
	scanf("%d", &x);
	printf("Enter y\n");
	scanf("%d", &y);
  
	a = &x;
	b = &y;
 
	temp = *b;
	*b = *a;
	*a = temp;
 
	printf("x = %d\ny = %d\n", x, y);
	
	return 0;
}

/*    Output
	* Enter x
	> 10
	* Enter y
	> 20
	* x = 20
	* y = 10
*/