//WAP to read a string and find length using string handling function and without it.

#include <stdio.h>

int main() {
	int len;
	char str[5000];

	printf("Enter the String: ");
	gets(str);

	for(;str[len] != '\0';len++);
	
	printf("Length: %d", len);
}

/*    Output
	* Enter the String: Aksh Desai
	* Length: 10
*/