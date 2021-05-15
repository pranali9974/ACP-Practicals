//WAP to read a string and find length using string handling function and without it.

/*
	* With Function
	* A String is declared and accepted.
	* strlen function is used to find the lenth of the string.
*/

#include <stdio.h>
#include <string.h>

int main() {
	int len;
	char str[5000];

	//Accepting the string
	printf("Enter the String: ");
	gets(str);

	//using the strlen function to find its length
	len = strlen(str);
	
	printf("Length: %d", len);
}

/*    Variable List
	* int len        -->        to store the lengh of the string
	* char str[]     -->        to store the string
*/

/*    Output
	* Enter the String: Aksh Desai
	* Length: 10
*/