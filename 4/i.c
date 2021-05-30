#include <stdio.h>

int main(void) {
	int n, c = 0;
	printf("Enter the length of the string.\n");
	scanf("%d", &n);
	char str[n];
	printf("Enter the String.\n");
	gets(str);
	gets(str);

	for(int i = 0;str[i] != '\0';i++)
		if(
			str[i] == 'A' ||
			str[i] == 'a'||
			str[i] == 'E' ||
		 	str[i] == 'e' ||
		 	str[i] == 'I' ||
		 	str[i] == 'i' ||
		 	str[i] == 'O' ||
		 	str[i] == 'o' ||
		 	str[i] == 'U' ||
		 	str[i] == 'u'
		   )
		   c++;

	printf("Number of vowels = %d\n", c);
}

/*    Output
	* Enter the length of the string.
	> 10
	* Enter the String.
	> Aksh Desai
	* Number of vowels = 4
*/