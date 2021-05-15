//WAP to check given string is palindrome or not.

/*
	* A string is declared and accepted.
	* The string is copied to a second string.
	* The second string is reversed.
	* The two strings are compared using the strcmp function.
*/

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

/*    Variable List
	* char str[]        -->        to store the first string
	* char strr[]       -->        to store the second string
*/

/*    Output
	* Enter the first String: AkshhskA
	* Palindrome
*/
/*    Output
	* Enter the first String: Aksh
	* Not Palindrome
*/