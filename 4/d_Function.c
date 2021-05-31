//WAP to read a string and find length using string handling function and without it.

#include <stdio.h>
#include <string.h>

int main(void) {
	int len;
	char str[5000];

	printf("Enter the String: ");
	gets(str);

	len = strlen(str);
	
	printf("Length: %d", len);
}

/*    Output
	* Enter the String: Aksh Desai
	* Length: 10
*/