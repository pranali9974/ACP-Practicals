#include <stdio.h>
#include <string.h>

int main() {
	int n = 100, len;
	char s1[n], s2[n/2];

	printf("Enter the first String: ");
	gets(s1);
	printf("Enter the second String: ");
	gets(s2);

	strcat(s1, s2);
	
	printf("Merged String: %s", s1);
}