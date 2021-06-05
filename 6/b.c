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
	int tmp;
	char t[5000];
	struct student s[5];

	printf("Enter the 5 names.\n");
	for(int i = 0;i < 5;i++){gets(t);strcpy(s[i].name, t);}
	printf("Enter the 5 rool numbers.\n");
	for(int i = 0;i < 5;i++){scanf("%d", &tmp);s[i].rollno = tmp;}
	printf("Enter the genders of the 5 students.\n");
	// for(int i = 0;i < 5;i++){gets(t);strcpy(s[i].gender, t);}
	printf("Enter the height of the 5 students.\n");
	for(int i = 0;i < 5;i++){scanf("%d", &tmp);s[i].height = tmp;}

	for(int i = 0;i < 5;i++) {
		printf("Student name: %s\n", s[i].name);
		printf("Student Roll no: %d\n", s[i].rollno);
		printf("Student gender: %s\n", s[i].gender);
		printf("Student height: %d\n", s[i].height);
		printf("\n\n");
	}
}