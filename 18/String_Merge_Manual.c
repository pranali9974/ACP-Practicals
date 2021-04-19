#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	char first_string[n];
	char second_string[m];
	int i;
	printf("Enter the first String\n");
	gets(first_string);
	gets(first_string);
	printf("Enter the second String\n");
	gets(second_string);

	for(i=0;first_string[i]!='\0';i++); 

	for(int j=0;second_string[j]!='\0';j++) {
		first_string[i]=second_string[j];
		i++;
	}
	first_string[i]='\0';
	printf("Output\n%s", first_string);
}