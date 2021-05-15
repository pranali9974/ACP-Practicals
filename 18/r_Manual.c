#include <stdio.h>
int main()
{
	char first_string[5000], second_string[5000], third_string[10000];
	int i;
	printf("Enter the first String\n");
	gets(first_string);
	printf("Enter the second String\n");
	gets(second_string);

	strcpy(third_string, first_string);

	for(i=0;first_string[i]!='\0';i++);

	for(int j=0;second_string[j]!='\0';j++) {
		first_string[i]=second_string[j];
		i++;
	}
	first_string[i]='\0';
	printf("Output\n%s", first_string);
}