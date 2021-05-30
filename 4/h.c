//WAP to read a string and print reverse of given string.

#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	printf("Enter the length of the string.\n");
	scanf("%d", &n);
	char str[n], rev[n];
	printf("Enter the String.\n");
	gets(str);
	gets(str);
	strrev(str);

	printf("Reversed String = %s\n", str);
}

/*    Output
	* Enter the length of the string.
	> 10
	* Enter the String.
	> Aksh Desai
	* Reversed String = iaseD hskA
*/