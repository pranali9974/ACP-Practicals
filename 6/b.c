//WAP to create and read elements of structure named students and initialize value for name, rollno, gender and height for five students.

#include <stdio.h>
#include <string.h>

struct student {
	char name[5000];
	int rollno;
	char gender;
	int height;
};

int main(void) {
	int tmp,i;
	char t[5000], tt;
	struct student s[5];

	printf("Enter the 5 names.\n");
	for(i = 0;i < 5;i++){gets(t);strcpy(s[i].name, t);}
	printf("Enter the 5 rool numbers.\n");
	for(i = 0;i < 5;i++){scanf("%d", &tmp);s[i].rollno = tmp;}
	printf("Enter the genders of the 5 students.\nEnter M or F.\n");
	for(i = 0;i < 5;i++){printf("Enter for %d", i+1);scanf(" %c", &tt);s[i].gender = tt;
	}
	// for(int i = 0;i < 5;i++){gets(t);strcpy(s[i].gender, t);}
	// for(int i = 0;i < 5;i++){gets(t);strcpy(s[i].gender, t);}
	printf("Enter the height of the 5 students.\n");
	for(i = 0;i < 5;i++){scanf("%d", &tmp);s[i].height = tmp;}

	for(i = 0;i < 5;i++) {
		printf("Student name: %s\n", s[i].name);
		printf("Student Roll no: %d\n", s[i].rollno);
		printf("Student gender: %c\n", s[i].gender);
		printf("Student height: %d\n", s[i].height);
		printf("\n\n");
	}
}
