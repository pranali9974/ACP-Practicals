#include <stdio.h>
#include <string.h>

int main() {
	int n = 100, len;
	char str[n];

	printf("Enter the first String: ");
	gets(str);

	len = strlen(str);
	
	printf("Length: %d", len);
}