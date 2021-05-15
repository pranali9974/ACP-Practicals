//WAP to read a string and find length using string handling function and without it.

/*
	* Without Function
	* A String is declared and accepted.
	* The string is ittereated through untill the null(terminating) character is found.
	* The number of itterations is the ength of the string.
*/

#include <stdio.h>

int main() {
	int len;
	char str[5000];

	//Accepting the string
	printf("Enter the String: ");
	gets(str);

	//Finding the index of null character
	for(;str[len] != '\0';len++);
	
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