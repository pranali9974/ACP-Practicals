//WAP to check given string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
	char str[5000], strr[5000];

	printf("Enter the first String: ");
	gets(str);

	strcpy(strr, str);
	strrev(strr);

	if(strcmp(str, strr) != 0)
		printf("Not ");

	printf("Palindrome");
}

/*    Output
	* Enter the first String: AkshhskA
	* Palindrome
*/
/*    Output
	* Enter the first String: Aksh
	* Not Palindrome
*/