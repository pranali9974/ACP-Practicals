#include <stdio.h>

int main() {
	char str[5000], c, cr;

	printf("Enter the first String: ");
	gets(str);

	printf("Enter the character to replace.\n");
	scanf("%c", cr);
	printf("Enter the character to replace it with.\n");
	scanf("%c", c);
	printf("Enter the character to replace it with.\n");
	scanf("%c", c);

	for(int i = 0;str[i] != '\0';i++)
		if(str[i] == cr)
			str[i] = c;
	
	printf("New String: %s", str);
}