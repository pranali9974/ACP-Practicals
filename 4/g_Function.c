//WAP to append two strings into one string using string hangling function and without it.
//With Functions

#include <stdio.h>
#include <string.h>

int main() {
	int len;
	char s1[50000], s2[5000], s3[10000];

	printf("Enter the first String: ");
	gets(s1);
	printf("Enter the second String: ");
	gets(s2);

	strcat(s3, s1);
	strcat(s3, s2);
	
	printf("Merged String: %s", s3);
}

/*    Output
	*Enter the first String: Aksh
	* Enter the second String: Desai
	* Merged String: AkshDesai
*/