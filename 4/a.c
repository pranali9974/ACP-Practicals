//WAP to read and print two different strings.

#include<stdio.h>

int main(void) {
	char s1[5000];
	char s2[5000];

	printf("Enter the first String: ");
	gets(s1);
	printf("Enter the second String: ");
	gets(s2);

	printf("First String: %s\n", s1);
	printf("Second String: %s\n", s2);
}

/*    Output
	* Enter the first String: My name is
	* Enter the second String: Aksh Desai
	* First String: My name is
	* Second String: Aksh Desai
*/