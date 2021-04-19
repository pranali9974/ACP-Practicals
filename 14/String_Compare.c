#include <stdio.h>
#include <string.h>

int main() {
	int n = 100;
	char s1[n], s2[n];

	printf("Enter the first String: ");
	gets(s1);
	printf("Enter the second String: ");
	gets(s2);

	if(strcmp(s1, s2) == 0)
		printf("Same");
	else
		printf("Not Same.");
}