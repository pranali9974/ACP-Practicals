//WAP to append two strings into one string using string hangling function and without it.
//With Functions

#include <stdio.h>
#include <string.h>

int main() {
	char first_string[5000], second_string[5000], third_string[10000];
	int i;
	printf("Enter the first String: ");
	gets(first_string);
	printf("Enter the second String: ");
	gets(second_string);

	strcpy(third_string, first_string);

	for(i=0;first_string[i]!='\0';i++);

	for(int j=0;second_string[j]!='\0';j++) {
		first_string[i]=second_string[j];
		i++;
	}
	first_string[i]='\0';
	printf("Merged String: %s", first_string);
}

/*    Output
	* Enter the first String: Aksh
	* Enter the second String: Desai
	* Merged String: AkshDesai
*/