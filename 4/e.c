//WAP to read a string and replace a given character from string.

#include <stdio.h>

int main(void) {
	char str[5000], c, cr;

	printf("Enter the String.\n");
	gets(str);

	printf("Enter the character to replace.\n");
	scanf("%c", &cr);
	printf("Enter the character to replace it with.\n");
	scanf("%c", &c);
	scanf("%c", &c);

	for(int i = 0;str[i] != '\0';i++)
		if(str[i] == cr)
			str[i] = c;
	
	printf("New String: %s", str);
}

/*    Output
	* Enter the string.
	> Aksh
	* Enter the character to replace.
	> A
	* Enter the character to replace it with.
	> a
	* aksh
*/