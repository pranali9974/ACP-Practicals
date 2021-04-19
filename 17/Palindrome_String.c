#include <stdio.h>
#include <string.h>

int main() {
	int n = 100, len;
	char str[n], strr[n];

	printf("Enter the first String: ");
	gets(str);

	strcpy(strr, str);
	strrev(strr);

	if(strcmp(str, strr) != 0)
		printf("Not ");

	printf("Palindrome");
}