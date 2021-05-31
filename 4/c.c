//WAP to compare two strings to check whether they are equal or not.

#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[5000], s2[5000];

	printf("Enter the first String: ");
	gets(s1);
	printf("Enter the second String: ");
	gets(s2);

	if(!strcmp(s1, s2) == 0)
		printf("Not ");
	printf("Same.");
}

/*    Output
	* Enter the first String: Aksh Desai
	* Enter the second string: Aksh Desai
	* Same.
*/
/*    Output 2
	* Enter the first String: Aksh Desai
	* Enter the second string: Tapi Diploma College
	* Not Same.
*/