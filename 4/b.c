//WAP to read a string and count the no. of words in a string.

#include <stdio.h>

int main(void) {
	int c = 1;
	char str[5000];

	printf("Enter the String:");
	gets(str);

	for(int i = 0;str[i] != '\0';i++)
		if(str[i] == ' ' && str[i + 1] != '\0' && str[i+1] != ' ')
			c++;

	printf("Number of words: %d", c);
}

/*    Output
	* Enter the String:My name is aksh desai
	* Number of words: 5
*/