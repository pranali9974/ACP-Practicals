/*
	* 
*/

#include <stdio.h>

int main(void) {
	printf("Enter the size of the first array.\n");
	int n, c = 1;
	scanf("%d", n);
	char str[n];

	printf("Enter the String:");
	gets(str);
	printf("rfb");
	gets(str);

	for(int i = 0;str[i] != '\0';i++)
		if(str[i] == ' ' && str[i + 1] != '\0' && str[i+1] != ' ')
			c++;

	printf("Number of words: %d", c);
}