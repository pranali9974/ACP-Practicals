#include <stdio.h>

int main(void) {
	int n = 100, c = 1;
	char str[100];

	printf("Enter the String:");
	gets(str);

	for(int i = 0;str[i] != '\0';i++)
		if(str[i] == ' ' && str[i + 1] != '\0' && str[i+1] != ' ')
			c++;

	printf("Number of words: %d", c);
}