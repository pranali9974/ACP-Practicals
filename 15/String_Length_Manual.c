#include <stdio.h>

int main() {
	int n = 100, len;
	char str[n];

	printf("Enter the first String: ");
	gets(str);

	for(;str[len] != '\0';len++);
	
	printf("Length: %d", len);
}