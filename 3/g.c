//WAP to find factorial of a given no using recursion.

#include <stdio.h>

int factorial(int n);

int main(void) {
	int n, fact;
	printf("Enter the number.\n");
	scanf("%d", &n);
	fact = factorial(n);
	printf("Factorial = %d", fact);
}

int factorial(int n) {
	int fac = n--;
	if(n != 1)
		fac *= factorial(n);
		
	return fac;
}

/*    Output
	* Enter the number.
	> 5
	* Factorial = 120
*/